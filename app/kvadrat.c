#include <stdio.h>
#include <math.h>
#include "myfunc.h"

roots kvadrat(int a, int b, int c)
{
    double d;
    roots answers;
    d = b * b - 4 * a * c;
    if (d > 0) {
        answers.count = 2;
        answers.x1 = (-b + sqrt(d)) / (2 * a);
        answers.x2 = (-b - sqrt(d)) / (2 * a);
        return answers;
    }
    if (d == 0.0) {
        answers.count = 1;
        answers.x1 = -b / (2 * a);
        return answers;
    }
    answers.count = 0;
    return answers;
}
