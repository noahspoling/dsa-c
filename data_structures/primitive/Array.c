#include "Array.h"

Array* createArray(int length) {
    Array array;
    array.data = (int*)calloc(length, sizeof(int));
    array.length = length;

    if (array.data == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    return &array;
}

void Array_set(Array *array, int index, int value) {
    if (array->data == NULL) {
        printf("Array data is NULL\n");
        exit(1);
    }
    
    if (index >= array->length) {
        printf("Index Out of Bounds. Cannot exceed the length of the array.\n");
        exit(1);
    }
    if (index < 0) {
        printf("Index Out of Bounds. Cannot be less than zero\n");
        exit(1);
    }
}

int Array_get(Array *array, int index) {
    int output;

    if (array->data == NULL) {
        printf("Array data is NULL\n");
        exit(1);
    }
    if (index >= array->length) {
        printf("Index Out of Bounds. Cannot exceed the length of the array.\n");
        exit(1);
    }
    if (index < 0) {
        printf("Index Out of Bounds. Cannot be less than zero\n");
        exit(1);
    }

    output = array->data[index];
    return output;
}

void Array_append(Array *array, int value) {
    array->data = (int*)realloc(array->data, (array->length + 1) * sizeof(int));
    if (array->data == NULL) {
        printf("Failed to allocate memory\n");
        exit(1);
    }
    array->data[array->length] = value;
    array->length += 1;
}

void deleteArray(Array* array) {
    free(array->data);
}