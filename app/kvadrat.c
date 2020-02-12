#include <stdio.h>
#include <math.h>

void kvadrat(int a, int b, int c)
{
    double x1, x2, d;
    d = b * b - 4 * a * c;
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("Корни уравнения: %lf %lf \n", x1 , x2);
    }
    if (d == 0.0) {
        x1 = -b / (2 * a);
        printf("Корни уравнения: %lf \n", x1);
    }
    if (d < 0) {
        printf("Вещественных корней нет\n");
    }
}
