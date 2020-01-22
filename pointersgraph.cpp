#include <iostream>
#include "myclasses.h"

using namespace std;
struct IntNode* header = NULL;

TestClass test(int data, double data2, float data3) {
    TestClass newclass;
    newclass.intdata = data;
    newclass.doubledata = data2;
    newclass.floatdata = data3;
    return newclass;
};

/*
void insert(int data) {
    struct IntNode* new_node = (struct IntNode*) malloc(sizeof(struct IntNode));
    new_node->number = data;
    new_node->pointer = header;
};
*/

int main() {
    int intdata;
    double doubledata;
    float floatdata;
    cout << "Input integer data: ";
    cin >> intdata;
    cout << endl;
    cout << "Input double data: ";
    cin >> doubledata;
    cout << endl;
    cout << "Input float data: ";
    cin >> floatdata;
    cout << endl;
    TestClass neo = test(intdata, doubledata, floatdata);
    cout << neo.intdata << "  " << neo.doubledata << " " << neo.floatdata << endl;
    return 0;
};