#include <math.h>
/**
LIbrary to perform matrix operations on a 1D array of integers
*/
void addition(double *E, int arrLen, double value) {

    double *output = E;

    for(int i = 0; i < arrLen; i++) {
        *output++ = *output + value;
    }
}

void subtract(double *E, int arrLen, int value) {
    double *output = E;

    for(int i = 0; i < arrLen; i++) {
        *output++ = *output - value;
    }
}

void multiplication(double *E, int arrLen, int value) {
    double *output = E;

    for(int i = 0; i < arrLen; i++) {
        *output++ = *output * value;
    }
}

void division(double *E, int arrLen, int value) {
    double *output = E;

    for(int i = 0; i < arrLen; i++) {
        *output++ = *output / value;
    }
}
/*
void modelo(double *E, int arrLen, int value) {
    double *output = E;

    for(int i = 0; i < arrLen; i++) {
        *output++ = *output;
    }
}
*/
void arrSin(double *E, int arrLen, int value) {
    double *output = E;

    for(int i = 0; i < arrLen; i++) {
        *output++ = sin(*output);
    }
}

void arrCos(double *E, int arrLen, int value) {
    double *output = E;

    for(int i = 0; i < arrLen; i++) {
        *output++ = cos(*output);
    }
}

void arrTan(double *E, int arrLen, int value) {
    double *output = E;

    for(int i = 0; i < arrLen; i++) {
        *output++ = tan(*output);
    }
}

void arrAsin(double *E, int arrLen, int value) {
    double *output = E;

    for(int i = 0; i < arrLen; i++) {
        *output++ = asin(*output);
    }
}