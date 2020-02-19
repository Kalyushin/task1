#include <stdio.h>

#include "myfunc.h"

int main()
{
    printf("Hello World!\n");
    roots answer;
    answer = kvadrat (1 , 6, 1);
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
