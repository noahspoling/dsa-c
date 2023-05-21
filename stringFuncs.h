#include <stdio.h>
#include <string.h>
/*
void sort(char str[]) {
	//gets char array length
	int size = strlen(str);

	//create empty instance of char array
	char out[size];

	printf("Size: %d\nString: %s\n", size, str);
	//outside loop descreases by 1 from array size so nested loop doesn't read the already sorted elements
	for (int j = size - 1; j >= 1; j--) {
		for (int i = 0; i < j - 1; i++) {
			char currentChar = str[i];
			char nextChar = str[i+1];
			printf("currentChar: %c\nNextChar: %c\n", currentChar, nextChar);
			printf("Output: %s\ni: %d\nj: %d\n", out, i, j);
			if(currentChar < nextChar) {
				printf("If current is less than\n");
				out[i] = nextChar;
				out[i+1] = currentChar;
			}
            		else {
                		out[i] = nextChar;
				out[i+1] = currentChar;        
        		}
		}
	}
	*str = out;
	printf("Output: %s\n", str);
}
*/

/**
 * function to appened two strings
 * @param strP1 : char array pointer for the first string
 * @param strP2 : char array point for the secound string
 * 
 * @return str
*/
void append(char *strP1, char *strP2, char *newStr) {
	//While functions to get the length of strings and then reset
	//pointer position to start of the string
	char *c1 = strP1;
	char *c2 = strP1;
	while (*c1 != '\0')
	{
		*newStr++ = *c1++;
	}
	while (*c2 != '\0')
	{
		*newStr++ = *c2++;
	}
}

int possibleCombinations(char str[]) {

	//get length of string for possible anagrams
	int length = strlen(str);

	//number of combinations is n * (n -1)
	if(length == 0) {
		return 0;
	}
	if(length == 1) {
		return 1;
	}
	if (length < 0) {
		printf("How did you get this??? /n");
	}
	else {
		return length * (length -1);
	}
}

/*

//Holds one char in a method scoped char before swapping
void swap(char *x, char *y) {
	char temp = *x;
	*x = *y;
	*y = temp;
}

void anagram(char str[]) {
	//gets the max number of times it will have to letter swap
	int index = 0;
	FILE *fp;
	char a[] = "anagram.txt";
	//char filename[] = str + a;
	//fp = fopen(filename, "w");

	for(int i = 0; i < strlen(str) - 1; i++) {
		for(int j = i + 1; j < strlen(str); j++) {
			swap(&swap[i], &str[j]);
			
		}
		//if index is at the last index of string
		if(index == (strlen(str) - 1)) {
			index = 0;
		}

		//Gets letter at index and one after as char variable
		char first = str[index];
		char second = str[index + 1];

		//Swaps locations of char values in input string
		str[index] = second;
		str[index + 1] = first;

		printf("Combination #%d: %s\n", i+1, str);
		index++;
	}
}
*/