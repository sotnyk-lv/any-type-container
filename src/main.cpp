#include <iostream>

#include <typeinfo>

#include "any_type/AnyType.h"

int main() {
    unsigned long int i = 10;
    AnyType a;
    std::cout << typeid(i).name() << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
