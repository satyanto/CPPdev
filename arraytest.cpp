#include <iostream>

int main() {
    int test2[2] = {1,2};
    int test4[4] = {1,2,3,4};



    for (int i = 0; i<2; i++) {
        std::cout << test2[i] << std::endl;
    }

    for (int i = 0; i<4; i++) {
        std::cout << test4[i] << std::endl;
    }

    return 0;
}  