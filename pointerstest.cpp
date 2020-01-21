#include <iostream>

using namespace std;
int main() {

    int integer = 5;
    cout << "integer value " << integer << endl;
    cout << "integer address " << &integer << endl;
    cout << "integer address value " << *&integer << endl;

    return 0;
}
