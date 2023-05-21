#include "mathfuncs.h"
#include <stdio.h>


int main() {
    long long number, result;
    printf("Enter a number to find the factorial of: ");
    scanf("%lli", &number);
    result = factorial(number);
    printf("The factorial for %d is: %lld\n", number, result);
}