#include <iostream>

#include <dummy.h>

int main() {
    const int a = 3;
    const int b = 5;
    std::cout << "add = " << add(a, b) << std::endl;
    return EXIT_SUCCESS;
}