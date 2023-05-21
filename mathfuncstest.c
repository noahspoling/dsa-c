#include <stdio.h>
#include <stdbool.h>
#include "mathfuncs.h"

int main() {
	bool state = true;
	printf("Power function test \n");

	double base, output;
	int e;
	while (state)
	{
		printf("Enter a value for base value: ");
		scanf("%lf", &base);

		printf("Enter a value for exponent value: ");
		scanf("%d", &e);

		output = powF(base, e);
		printf("Answer: %f \n", output);
	}
	
}
