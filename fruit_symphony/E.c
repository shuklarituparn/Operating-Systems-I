//
// Created by rituparn on 29.09.23.
//

#include <stdio.h>


int main() {
    int h1, h2, m1, m2, hour, minutes;
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);

    hour = h1 + h2;
    minutes = m1 + m2;


    if(minutes >= 60){
        minutes = minutes - 60;
        hour ++;
    }

    if(hour >= 24) {
        hour = hour - 24;
    }

    printf("%02d:%02d\n", hour, minutes);

    return 0;
}