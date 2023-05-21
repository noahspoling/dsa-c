#include <stdio.h>

/*
 * Author: Noah Poling
 * Title: mathfuncs.h
 * Description: Header file I made to learn and practice c.
 */

/* power function using a for loop to return a value of a base double value */
double powF(double base, int e) {
	printf("Input base: %lf exponent: %d \n", base);

	double answer;

	if(e == 0) {
		return 1;
	}
	
	//If exponent is 1
	if(e == 1) {
		return base;
	}

	//If exponent is positive
	if(e > 0) {
		//set answer to 
		answer = base;

		//Multiply base value by itself n - 1 times
		for(int i = 1; i < e; i++) {
			answer = answer * base;
		}

		return answer;
	}

	//If exponent is negative
	if(e < 0) {
		//Assign answer to n^-1 before loop		
		answer = 1 / base;
		//Change negative exponent value for the loop
		int negE = e * -1;

		for(int i = 1; i < negE; i++) {
			answer = answer * (1 / base);
		}
	}
	return answer;
}

long long factorial(long long number) {
	long long out = 1;
	if(number < 0) {
		printf("Input is negative.\n");
		return out;
	}
	if (number < 26) {
		while (number > 0) {
		out *= number;
		number--;
	}
	}
	else {
		printf("Input too large.\n");
		return out ;
	}
	
	return out;
}
