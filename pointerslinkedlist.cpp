#include <iostream>
#include <cstdio>

using namespace std;

// Using a dynamic variable; this starts at 'NULL' and then will change with every new
// insertions to our list! Think of this as... you're starting at the end, and any new
// data insertions will 'grow' our linked list BACKWARDS.
struct Node* head = NULL;

// Our 'current' node pointer will be used when we show our linked list through a loop.
struct Node* current = NULL;


struct Node {
    int number;
    //struct Node *link;
};


typedef struct MyOwnCustomNode* Pointer;


struct MyOwnCustomNode {
    int leftnumber;
    int rightnumber;

    Pointer left;
    Pointer right;
};



//   *pointer   is a way to initiate/declare a new pointer called 'pointer'   
//   pointer*   returns the pointer... I'm guessing the address... should cout.  

void insert(int data) {
    // Malloc allocates an uninitialized memory block and returns a void pointer
    // struct Node* is a pointer type
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->number = data;
    newNode->link = head;
    // we change our head variable to our newNode so that any new insertions will
    // instead point to this one, YEET!
    head = newNode;
};

void show() {
    // so first we need to output all the data in our list... so we need a loop
    // I'm gonna make a while loop since unknown length, and then we can check
    // for a 'NULL' pointer, and if we do catch it, stop the loop.

    // Because our 'head' is the current 'head' of the node, we can refer to it
    // as we 'travel' through our linked list.
    current = head;

    // current will be updated to check for the next item in the list, stop if its NULL.
    while (current != NULL) {
        cout << current->number << " ";
        current = current->link;
    }
}

int main() {
    insert(4);
    insert(12);
    insert(1);
    insert(99);
    insert(33);
    cout << "The linked list is: " << endl;
    show();
    cout << endl;
    return 0;
}