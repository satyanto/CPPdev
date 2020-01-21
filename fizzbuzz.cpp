#include <iostream>
using namespace std;

int main() {
    int iterator = 0;
    while (iterator <= 100) {
        if ((iterator%5==0) && (iterator%2==0)) {
            cout << "FIZZBUZZ: " << iterator << endl;
        } else if ((iterator%5==0) && (iterator%2!=0)) {
            cout << "FIZZ: " << iterator <<endl;
        } else if ((iterator%5!=0) && (iterator%2==0)) {
            cout << "BUZZ: " <<iterator <<endl;
        } else {
            cout << iterator << endl;
        }
        
        iterator++;
    };
    return 0;
}