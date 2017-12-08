struct Node {
    void* value;
    struct Node* next;
    
};


struct LinkedList {
    struct Node* start;
    struct Node* end;
    int size;
};


void LinkedList_new (struct LinkedList* ll);

void reverse (struct LinkedList* ll);
void addNode (struct LinkedList* ll, void* value); 
void data_print (struct LinkedList* ll);
