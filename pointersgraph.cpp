#include <iostream>
#include "myclasses.h"

using namespace std;
IntNode* header = NULL;
IntNode* current = NULL;
int linkedlist[] = { };

TestClass test(int data, double data2, float data3) {
    TestClass newclass;
    newclass.intdata = data;
    newclass.doubledata = data2;
    newclass.floatdata = data3;
    return newclass;
};

void insertToList(int data) {
    IntNode* newnode = (struct IntNode*) malloc(sizeof(struct IntNode));
    newnode->number = data;
    newnode->pointer = header;
    header = newnode;
}

void displayList() {
    cout << "Linked list is: " << endl;
    current = header;
    while (current != NULL) {
        cout << current->number << endl;
        current = current->pointer;
    };
}

void sortList() {
    int counter = 0;
    current = header;
    while (current != NULL) {
        linkedlist[counter] = current->number;
        counter++;
        current = current->pointer;
    };
    cout << "Size of LinkedList is: " << sizeof(linkedlist) << endl;
    for (int a = 0; sizeof(linkedlist); a++) {
        cout << linkedlist[a] << endl;
    }
}

int main() {
    insertToList(1);
    insertToList(2);
    insertToList(4);
    insertToList(8);
    //displayList();
    sortList();

    // int intdata;
    // double doubledata;
    // float floatdata;
    // cout << "Input integer data: ";
    // cin >> intdata;
    // cout << endl;
    // cout << "Input double data: ";
    // cin >> doubledata;
    // cout << endl;
    // cout << "Input float data: ";
    // cin >> floatdata;
    // cout << endl;
    // TestClass neo = test(intdata, doubledata, floatdata);
    // cout << neo.intdata << "  " << neo.doubledata << " " << neo.floatdata << endl;
    return 0;
};