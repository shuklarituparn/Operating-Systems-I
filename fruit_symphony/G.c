//
// Created by rituparn on 29.09.23.
//
#include <stdio.h>
int main() {
    float x, y;

    scanf("%f %f", &x, &y);
    float func1 = 1 + (x * x);
    float func2 = -2 - (x * x);
    if (y > func1 || y < func2) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
