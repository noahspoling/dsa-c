#include "LinkedList.h"

void LinkedList_init(LinkedList* list) {
    LinkedList* list = (struct Node*)malloc(sizeof(struct Node));;
}

void LinkedList_push(LinkedList* list, int x) {
    Node* currentNode = list->head;
    Node* newNode;
    newNode->value = x;
    newNode->next = currentNode->next;
    list->head = newNode;
}

void LinkedList_insertAt(LinkedList* list, int index, int x) {
    Node* currentNode = list->head;
    for(int i = 0; i < list->size; i++) {
        if( i == index) {
            currentNode->value = x;
        }
        if(currentNode->next == NULL) {
            printf("Unexpected null node in Linked List");
            break;
        }
        currentNode = currentNode->next;
    }
}

void LinkedList_insertBefore(LinkedList* list, int index, int x) {
    struct Node* currentNode = list->head;
    struct Node* previousNode;
    for(int i = 0; i < list->size; i++) {
        if( i == index) {
            currentNode->value = x;
            return;
        }
        if(currentNode->next == NULL) {
            printf("Unexpected null node in Linked List");
            return;
        }

        previousNode = currentNode;
        currentNode = currentNode->next;
    }
}

void LinkedList_insertAfter(LinkedList* list, int index, int x) {
    Node* currentNode = list->head;
    Node* newNode;
    newNode->value = x;
    for(int i = 0; i < list->size; i++) {
        if( i == index) {

        }
    }
}
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

