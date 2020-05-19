#include <stdio.h>
#include <iostream>

int main() {

    int i = 4;

    std::cout << "i initial: " << i << std::endl;

    i++;

    std::cout << "i iterated: " << i << std::endl;

    int j = i++;
    int k = ++j;
    int l = ++i;
    
    std::cout << "i kl iterated: " << i << std::endl;

    i++;

    std::cout << "i iterated+++: " << i << std::endl;
    std::cout << "j: " << j << std::endl;
    std::cout << "k: " << k << std::endl;
    std::cout << "l: " << l << std::endl;

    return 0;
}
