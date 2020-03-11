#include <stdio.h>
#include <math.h>
#include "myfunc.h"

roots kvadrat(double a, double b, double c)
{
    double d;
    roots answers;
    if ((a == 0.0)&&(b == 0.0) &&(c == 0.0)) {
        answers.count = -1;
        return answers;
    }

    if (a == 0.0) {
        if (c == 0.0) {
            answers.count = 1;
            answers.x1 = 0;
        } else {
            answers.count = 1;
            answers.x1 = -c / b;
            return answers;
        }
    }
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
