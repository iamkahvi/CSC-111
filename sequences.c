/*
 *  Name:        Kahvi Patel
 *  UVicID:      V00895917
 *  Date:        Sep 25, 2017
 *  Assignment:  A2 Part 2
 *  File name:   V00895917A2P2.c
 *  Description: Sequence Generator
 */

#include <stdio.h>
#include <stdlib.h>

void ArithmeticSequence(int start, int increment, int count) {
    printf("Arthmetic sequence: \n");
    for(int i = start;i < start + (increment*count);) {
           printf("%i   ", i);
           i = i + increment;
    }
    printf("\n");
}

void LeonardoSequence(int k, int count) {
    printf("Leonardo Sequence: \n");
    int a = 1;
    int b = 1;
    int c = 1;
    for (int i = 1; i < count + k; i++) {
       if (i > 2) {
            c = a + b + 1;
            a = b;
            b = c;
        }
        if (i >= k) {
            printf ("%i ", c);
        }
    }
    printf("\n");
}

void HarmonicSequence(float k, float count) {
    printf("Harmonic sequence: \n");
    for(float j = k; j < count + k;j++) {
           printf("%.3f  ", 1/j);
    }
    printf("\n");
}

int main (void) {
    ArithmeticSequence(17, 6, 5);
    ArithmeticSequence(34, 6, 8);
    LeonardoSequence(2, 7);
    LeonardoSequence(5, 7);
    HarmonicSequence(1, 6);
    HarmonicSequence(3, 6);
    return EXIT_SUCCESS;
}
