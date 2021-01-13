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
        short int short_int_data;
        unsigned short int unsigned_short_int_data;
        int int_data;
        unsigned int unsigned_int_data;
        long int long_int_data;
        unsigned long int unsigned_long_int_data;
        long long int long_long_int_data;
        unsigned long long int unsigned_long_long_int_data;
        bool bool_data;
        char char_data;
        signed char signed_char_data;
        unsigned char unsigned_char_data;
        wchar_t wchar_t_data;
        float float_data;
        double double_data;
        long double long_double_data;
    } data;

    std::size_t type_hash = 0;
    std::string type_name = "";
    bool data_present = false;

public:
    AnyType();
    AnyType(short int value);
    AnyType(unsigned short int value);
    AnyType(int value);
    AnyType(unsigned int value);
    AnyType(long int value);
    AnyType(unsigned long int value);
    AnyType(long long int value);
    AnyType(unsigned long long int value);
    AnyType(bool value);
    AnyType(char value);
    AnyType(signed char value);
    AnyType(unsigned char value);
    AnyType(wchar_t value);
    AnyType(float value);
    AnyType(double value);
    AnyType(long double value);
    AnyType(const AnyType& other);

    ~AnyType();

    void DestroyData();

    AnyType& operator=(const AnyType& other);
    AnyType& operator=(const short int& value);
    AnyType& operator=(const unsigned short int& value);
    AnyType& operator=(const int& value);
    AnyType& operator=(const unsigned int& value);
    AnyType& operator=(const long int& value);
    AnyType& operator=(const unsigned long int& value);
    AnyType& operator=(const long long int& value);
    AnyType& operator=(const unsigned long long int& value);
    AnyType& operator=(const bool& value);
    AnyType& operator=(const char& value);
    AnyType& operator=(const signed char& value);
    AnyType& operator=(const unsigned char& value);
    AnyType& operator=(const wchar_t& value);
    AnyType& operator=(const float& value);
    AnyType& operator=(const double& value);
    AnyType& operator=(const long double& value);

    void Swap(AnyType &other);

    std::string DataTypeName();
    std::size_t DataTypeHash();

    short int ToShortInt();
    unsigned short int ToUnsignedShortInt();
    int ToInt();
    unsigned int ToUnsignedInt();
    long int ToLongInt();
    unsigned long int ToUnsignedLongInt();
    long long int ToLongLongInt();
    unsigned long long int ToUnsignedLongLongInt();
    bool ToBool();
    char ToChar();
    signed char ToSignedChar();
    unsigned char ToUnsignedChar();
    wchar_t ToWchar_t();
    float ToFloat();
    double ToDouble();
    long double ToLongDouble();
};


#endif //LINKED_LIST_ANYTYPE_H
