#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "sort.h"


int getRandomInt() {
    return rand();
}

int main() {
    int n;
    char direction;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    getchar();

    printf("Ascending or Descending? (a/d)");
    scanf(" %c", &direction);

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        return 1;
    }

    srand(time(NULL));
    for(int x = 0; x < n; x++) {
        arr[x] = getRandomInt();
    }
    int* aPtr = arr;
    bubbleInt(aPtr, n, direction);
    for(int y = 0; y < n; y++) {
        printf("i: %d value: %d\n", y, arr[y]);
    }
    free(arr);
    return 0;
}