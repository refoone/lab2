#include "stdlib.h"
#include "stdio.h"
#include "variant2.h"


void LinkedList_new (struct LinkedList* ll) {
    ll->start = NULL;
    ll->end = ll->start;

    ll->size=0;
    return;
}

void addNode (struct LinkedList* ll, void* value) {
    if (NULL == ll->start) {
        ll->start =  malloc (sizeof (struct Node));
        ll->start->next = NULL;
        ll->end = ll->start;
    } 
    else {
        ll->end->next =  malloc (sizeof(struct Node));
        ll->end->next->next=NULL;
        ll->end = ll->end->next;
    }
    
    ll->end->value = value;
    ll->size++;
    return;
}

void reverse (struct LinkedList* ll){
    struct Node* cur;
    struct Node* prev;
    struct Node* nx;
    
    
    
    cur = ll->start->next;
    prev = ll->start;
    prev->next = NULL;

    for(int i=1; i<=ll->size-1; i++){
        
        nx = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nx;
        
    }
    
    nx = ll->start;
    ll->start = prev;
    ll->end = nx;
    
    

    return;
    
}

void data_print (struct LinkedList* ll){
    int i;
    struct Node* cur = ll->start;
    for (i=1; i<=ll->size; i++){
        printf ("%d string: %s \n", i, cur->value);
        cur = cur->next;
    }
    
    return;
}