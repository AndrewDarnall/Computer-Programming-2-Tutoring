/**
 * Codice Lista Concatenata singolarmente (Singly Linked List) ~ procedural
*/
#include <stdio.h>
#include <stdlib.h>


struct Node_t {
    int key;
    struct Node_t* nextNode;
};

struct Node_t* addNode(int k, struct Node_t* head) {
    struct Node_t* newNode = (struct Node_t*) malloc(sizeof(struct Node_t));
    newNode->key = k;
    newNode->nextNode = head;
    head = newNode;
    return head;
}

struct Node_t* searchNode(int k, struct Node_t* head) {
    struct Node_t* iter = head;
    while(iter != NULL) {
        if (iter->key == k) return iter;
        iter = iter->nextNode;
    }
    fprintf(stderr, "The searched element in not in the list.\n");
    return NULL;
}

void printList(struct Node_t* head) {
    struct Node_t* iter = head;
    while(iter != NULL) {
        fprintf(stdout, "%d --> ", iter->key);
        iter = iter->nextNode;
    }
    fprintf(stdout, " NIL \n");
}

int main(int argc, char** argv) 
{

    fprintf(stdout, "Linked List C Demo\n");

    // Create a new list
    struct Node_t* list = (struct Node_t*) malloc(sizeof(struct Node_t));
    list->nextNode = NULL;

    for (int i = 0; i < 10; i++) {
        list = addNode(i + 1, list);
    }

    // Search for the list contents
    fprintf(stdout, "Indirizzo del nodo con la chiave - 6\t%p\n",searchNode(6, list));
    fprintf(stdout, "Indirizzo del nodo con la chiave - 11\t%p\n",searchNode(11, list));

    // Print the list
    fprintf(stdout, "Contents of the List:\n");
    printList(list);

}