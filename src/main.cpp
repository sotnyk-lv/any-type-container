#include <iostream>

#include <typeinfo>

#include "any_type/AnyType.h"

//bool, int, long int, double, long double, char , unsigned int, float

int main() {
    unsigned long int i = 10;
    AnyType a;
//    std::cout << "a type: " << a.DataTypeName() << " type hash: " << a.DataTypeHash() << std::endl;
    a = 10;
    std::cout << "a type: " << a.DataTypeName() << " type hash: " << a.DataTypeHash() << std::endl;
    std::cout << a.ToInt() << std::endl;
    try {
        std::cout << a.ToFloat() << std::endl;
    }
    catch (const std::runtime_error& exc) {
        std::cout << "runtime error caught\nmessage: " << exc.what() << std::endl;
    }

    std::string st1 = "1";
    st1 = "2";
    std::cout << "st1: " << st1 << std::endl;
    std::string st2 = "1";
    std::cout << "st1: " << st1 << std::endl;
    std::cout << "st2: " << st2 << std::endl;
    std::swap(st1, st2);
    std::cout << "st1: " << st1 << std::endl;
    std::cout << "st2: " << st2 << std::endl;

    AnyType b(10.2);
    std::cout << b.ToDouble() << std::endl;

    std::cout << "a type: " << a.DataTypeName() << " type hash: " << a.DataTypeHash() << std::endl;
    std::cout << "b type: " << b.DataTypeName() << " type hash: " << b.DataTypeHash() << std::endl;
//    std::cout << "a type: " << a.DataTypeName() << " type hash: " << a.DataTypeHash() << std::endl;
    a.Swap(b);
//    AnyType c = a;
//    a = b;
//    b = c;
    std::cout << "a type: " << a.DataTypeName() << " type hash: " << a.DataTypeHash() << std::endl;
    std::cout << "b type: " << b.DataTypeName() << " type hash: " << b.DataTypeHash() << std::endl;

    std::cout << typeid(i).name() << std::endl;

    char ch = 'a';
    AnyType ch_a = ch;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
