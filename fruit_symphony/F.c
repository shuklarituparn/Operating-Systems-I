//
// Created by rituparn on 30.09.23.
//
#include <stdio.h>

int main() {
    float x1, x2, x3, y1, y2, y3;
    FILE *inputFile, *outputFile;

    inputFile = fopen("input", "r");

    outputFile = fopen("output", "w");

    fscanf(inputFile, "%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);

    float centroid_x = (x1 + x2 + x3) / 3;
    float centroid_y = (y1 + y2 + y3) / 3;

    fprintf(outputFile, "%f %f", centroid_x, centroid_y);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}