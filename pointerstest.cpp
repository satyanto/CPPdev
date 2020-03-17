#include <iostream>

using namespace std;

int swapnormal(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    return x;
};

int swapbyreference(int &x, int &y) {
    int temp = x;   // temp = 50
    x = y;          // x = 10
    y = temp;          // if y = x, then y = 10, should be y = temp
    return x;
}

int swapbypointer(int x, int y) {   // if i'm not wrong, i think u can make a pointer that references a parameter's address directly
    cout << endl << "x: " << x << endl;
    cout << "y: " << y << endl;
    int* ptrx = &x;     // we are making a pointer that points to the 'x' parameter's memory address, so we can change it!
    int* ptry = &y;
    cout << endl << "ptrx: " << *ptrx << endl;  // we are now confirming that the value that 'ptrx' points to is the same as the parameter 'x'!
    cout << "ptry: " << *ptry << endl;
    int temp = x;       // we just need the int value, so we can just take it from the 'x' parameter
    *ptrx = *ptry;      // we are now swapping the value pointed to by 'ptrx' with the value pointed to by 'ptry'!
    *ptry = temp;
    cout << endl << "temp: " << temp << endl;
    cout << endl << "(pa) = ptry: " << *ptrx << endl;
    cout << "(pb) = temp: " << *ptry << endl;
    cout << endl << "func params, x: " << x << endl;    // since we are changing the value in the memory address, our function's parameters, when accessed
    cout << "func params, y: " << y << endl;            // even from within the same function, should now also change!
    
    return y;
}

void getaddress(int* address, int value) {
    cout << endl << value << " pointer adress: " << &address << endl;
    cout << value << " parameter address: " << &value << endl;
}

int main() {

    const int a = 50;
    const int b = 10;
    int ra = a;
    int rb = b;
    int pa = a;
    int pb = b;

    cout << "--------------------------------" << endl;

    cout << "before, a: " << a << endl;
    cout << "before, b: " << b << endl;

    int x = swapnormal(a, b);
    cout << "normal, a (50): " << a << endl;
    cout << "normal, b (10): " << b << endl;
    cout << "normal, x (10): " << x << endl;    // we passed the value of '50' but now it is swapped to '10'.
  
    // this function will pass a reference to the memory address of the integers 'ra' and 'rb'
    // the function did not return any values but instead changed the value directly from the memory address! yeet!
    int nx = swapbyreference(ra, rb);
    cout << "reference, a (10): " << ra << endl;
    cout << "reference, b (50): " << rb << endl;
    cout << "reference, x (10): " << nx << endl;    // since we got a 'snapshot' of 'x' as 'a' but this was after swap so x = 10. 

    int px = swapbypointer(pa, pb);
    cout << endl << "pointer, a (10): " << pa << endl;
    cout << "pointer, b (50): " << pb << endl;
    cout << "pointer, x (50): " << px << endl;

    // Ok nvm I was wrong, so I think that passing an integer value to a function replicates that value to a different memory address...
    // time to confirm, I guess:
    getaddress(&pa, pa);
    getaddress(&pb, pb);


    int integer = 5;
    const char& hello = 'h';
    cout << endl << "--------------------------------------------------" << endl;
    cout << "before integer value " << integer << endl;
    cout << "before integer address " << &integer << endl;
    cout << "before integer address value " << *&integer << endl;
    integer++;
    int newinteger = integer + 3;
    int passinteger = *&integer + 3;
    cout << "newinteger: " << newinteger << endl;
    cout << "passinteger: " << passinteger << endl;
    //cout << "test value: " << *integer << endl;
    cout << "hello, reference of: " << hello << endl;
    cout << "hello, address: " << &hello << endl;
    return 0;
}