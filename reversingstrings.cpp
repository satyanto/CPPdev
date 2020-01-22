#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    string input;
    string output;
    cin >> input;
    cout << "You have typed in: " << endl;
    for(int a = input.length(); a>=0; a--) {
        output = output + input[a];
    }
    cout << input << endl;
    cout << "Reversed string: " << endl;
    cout << output << endl;
    return 0;
}
