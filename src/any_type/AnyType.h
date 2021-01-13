//
// Created by danyl on 1/12/2021.
//

#ifndef LINKED_LIST_ANYTYPE_H
#define LINKED_LIST_ANYTYPE_H

#include <typeinfo>
#include <string>

class AnyType {
private:
    union Data {
        int int_data;
        bool bool_data;
        char char_data;
        float float_data;
        double double_data;
    } data;

    std::size_t type_hash = 0;
    std::string type_name = "";
    bool data_present = false;

public:
    AnyType();
    AnyType(int value);
    AnyType(bool value);
    AnyType(char value);
    AnyType(float value);

    ~AnyType();

    void DestroyData();

    void Swap(AnyType other);

    std::string DataTypeName();
    std::size_t DataTypeHash();

    int ToInt();
    bool ToBool();
    char ToChar();
    float ToFloat();
};


#endif //LINKED_LIST_ANYTYPE_H
