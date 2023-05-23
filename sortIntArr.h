#include<string.h>

/**
 * @paragraph swap method using void* pointers to allow for different
 * pointer types.
 * 
 * @author @noahspoling 
 * @param p1 first pointer object to swap.
 * @param p2 second pointer object to swap.
 * @
*/
void swapInt(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


void bubbleInt(int* arr, int arrLength, char direction) {
    switch (direction)
    {
    case 'a':
    case 'A':
        int i, j; 
        for(int i = 0; i < arrLength - 1; i++) {
            for(int j = 0; j < arrLength - i - 1; j++) {
                if (*(arr + j) > *(arr + j + 1)) {
                    swapInt(&arr[j], &arr[j+1]);
                }
            }

        }
        break;
    case 'd':
    case 'D':
        for(int i = 0; i < arrLength - 1; i++) {
            for(int j = 0; j < arrLength - i - 1; j++) {
                if (*(arr + j) < *(arr + j + 1)) {
                    swapInt(&arr[j], &arr[j+1]);
                }
            }

        }
        break;
    default:
        break;
    }
}