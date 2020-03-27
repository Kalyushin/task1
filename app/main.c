#include <stdio.h>

#include "myfunc.h"

int main()
{
    printf("Hello World!\n");
    roots answer;
    printf ("Введите коэффициенты \n");
    double a, b, c;
    int code = scanf("%lf %lf %lf", &a, &b, &c);
    if (code < 0) 
        return -1;
    answer = kvadrat (a, b, c);
    if (answer.count == -1){
        printf("Ошибка! Вы не ввели коэфиценты");
    }
    if (answer.count == 0) {
        printf("Корней нет");
    }
    if (answer.count == 1) {
       printf("Корень один: %lf ", answer.x1);
    }
    if (answer.count == 2) {
        printf("Корней два: %lf %lf", answer.x1, answer.x2);
    }
    return myfunc(2);
}
