#include <stdio.h>
#include <stdbool.h>
#include "stringFuncs.h"

int main() {
	bool state = true;
	char response;

	while(state) {
		printf("Enter a string: \n");
		char string[255];
		scanf("%s", &string);
		anagram(string);


		printf("Would you like to enter a new word? (Y/N) \n");

		scanf("%c", &response);

		switch (response)
		{
		case 'Y':
			break;

		case 'y':
			break;

		case 'N':
			break;

		case 'n':
			break;

		default:
			printf("Not a valid response. Exiting... \n");
			break;
		}
	}
}
