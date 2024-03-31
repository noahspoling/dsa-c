#ifndef LinkedList_H
#define LinkedList_H

#include <stdbool.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    Node* next;
} Node;

typedef struct LinkedList {
    Node* head;
    int size;
} LinkedList;

void LinkedList_init(LinkedList* list);
void LinkedList_add(LinkedList* list, int x);
void LinkedList_insertAt(LinkedList* list, int index, int x);
void LinkedList_insertBefore(LinkedList* list, int index, int x);
void LinkedList_insertAfter(LinkedList* list, int index, int x);
void LinkedList_set(LinkedList* list, int index, int x);
int* LinkedList_get(LinkedList* list, int index);
int LinkedList_find(LinkedList* list, int x);
int LinkedList_findAll(LinkedList* list, int x);
int LinkedList_size(LinkedList* list);
bool LinkedList_contains(LinkedList* list, int x);
bool LinkedList_isEmpty(LinkedList* list);
void LinkedList_removeAt(LinkedList* list, int x);
void LinkedList_print(LinkedList* list);
void LinkedList_clear(LinkedList* list);




#endif