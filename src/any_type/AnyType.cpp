//
// Created by danyl on 1/12/2021.
//

#include <stdexcept>
#include "AnyType.h"

AnyType::AnyType() = default;

AnyType::AnyType(unsigned short int value) {
    data.unsigned_short_int_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
}

AnyType::AnyType(short int value) {
    data.short_int_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
}

AnyType::AnyType(unsigned int value) {
    data.unsigned_int_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
}

AnyType::AnyType(int value) {
    data.int_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
}

AnyType::AnyType(unsigned long int value) {
    data.unsigned_long_int_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
}

AnyType::AnyType(long int value) {
    data.long_int_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
}

AnyType::AnyType(unsigned long long int value) {
    data.unsigned_long_long_int_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
}

AnyType::AnyType(long long int value) {
    data.long_long_int_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
}

AnyType::AnyType(bool value) {
    data.bool_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
}

AnyType::AnyType(char value) {
    data.char_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
}

AnyType::AnyType(signed char value) {
    data.signed_char_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
}

AnyType::AnyType(unsigned char value) {
    data.unsigned_char_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
}

AnyType::AnyType(wchar_t value) {
    data.wchar_t_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
}

AnyType::AnyType(float value) {
    data.float_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
}

AnyType::AnyType(double value) {
    data.double_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
}

AnyType::AnyType(long double value) {
    data.long_double_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
}

AnyType::AnyType(const AnyType& other) {
    type_hash = other.type_hash;
    data_present = other.data_present;
    data = other.data;
    data_present = true;
}

AnyType::~AnyType() = default;

void AnyType::DestroyData() {
    type_hash = 0;
    type_name = "";
    data_present = false;
}

AnyType& AnyType::operator=(const AnyType& other) {
    if (!other.data_present) {
        throw std::runtime_error("unassigned value of other AnyType variable");
    }
    type_hash = other.type_hash;
    data_present = other.data_present;
    data = other.data;
    data_present = true;
    return *this;
}

AnyType& AnyType::operator=(const short int& value) {
    data.short_int_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
    return *this;
}

AnyType& AnyType::operator=(const unsigned short int& value) {
    data.unsigned_short_int_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
    return *this;
}

AnyType& AnyType::operator=(const int& value) {
    data.int_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
    return *this;
}

AnyType& AnyType::operator=(const unsigned int& value) {
    data.unsigned_int_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
    return *this;
}

AnyType& AnyType::operator=(const long int& value) {
    data.long_int_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
    return *this;
}

AnyType& AnyType::operator=(const unsigned long int& value) {
    data.unsigned_long_int_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
    return *this;
}

AnyType& AnyType::operator=(const long long int& value) {
    data.long_long_int_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
    return *this;
}

AnyType& AnyType::operator=(const unsigned long long int& value) {
    data.unsigned_long_long_int_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
    return *this;
}

AnyType& AnyType::operator=(const bool& value) {
    data.bool_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
    return *this;
}

AnyType& AnyType::operator=(const char& value) {
    data.char_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
    return *this;
}

AnyType& AnyType::operator=(const signed char& value) {
    data.signed_char_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
    return *this;
}

AnyType& AnyType::operator=(const unsigned char& value) {
    data.unsigned_char_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
    return *this;
}

AnyType& AnyType::operator=(const wchar_t & value) {
    data.wchar_t_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
    return *this;
}

AnyType& AnyType::operator=(const float& value) {
    data.float_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
    return *this;
}

AnyType& AnyType::operator=(const double& value) {
    data.double_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
    return *this;
}

AnyType& AnyType::operator=(const long double& value) {
    data.long_double_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
    return *this;
}

void AnyType::Swap(AnyType &other) {
    std::swap(data, other.data);
    std::swap(type_hash, other.type_hash);
    std::swap(type_name, other.type_name);
    std::swap(data_present, other.data_present);
}

std::string AnyType::DataTypeName() {
    if (!data_present) {
        throw std::runtime_error("unassigned value of AnyType variable");
    }
    return type_name;
}

std::size_t AnyType::DataTypeHash() {
    if (!data_present) {
        throw std::runtime_error("unassigned value of AnyType variable");
    }
    return type_hash;
}

short int AnyType::ToShortInt() {
    if (type_hash != typeid(data.short_int_data).hash_code()) {
        if (!data_present) {
            throw std::runtime_error("unassigned value of AnyType variable");
        } else{
            throw std::runtime_error("wrong type of value stored in AnyType variable");
        }
    }
    return data.short_int_data;
}

unsigned short int AnyType::ToUnsignedShortInt() {
    if (type_hash != typeid(data.unsigned_short_int_data).hash_code()) {
        if (!data_present) {
            throw std::runtime_error("unassigned value of AnyType variable");
        } else{
            throw std::runtime_error("wrong type of value stored in AnyType variable");
        }
    }
    return data.unsigned_short_int_data;
}

int AnyType::ToInt() {
    if (type_hash != typeid(data.int_data).hash_code()) {
        if (!data_present) {
            throw std::runtime_error("unassigned value of AnyType variable");
        } else{
            throw std::runtime_error("wrong type of value stored in AnyType variable");
        }
    }
    return data.int_data;
}

unsigned int AnyType::ToUnsignedInt() {
    if (type_hash != typeid(data.unsigned_int_data).hash_code()) {
        if (!data_present) {
            throw std::runtime_error("unassigned value of AnyType variable");
        } else{
            throw std::runtime_error("wrong type of value stored in AnyType variable");
        }
    }
    return data.unsigned_int_data;
}

long int AnyType::ToLongInt() {
    if (type_hash != typeid(data.long_int_data).hash_code()) {
        if (!data_present) {
            throw std::runtime_error("unassigned value of AnyType variable");
        } else{
            throw std::runtime_error("wrong type of value stored in AnyType variable");
        }
    }
    return data.long_int_data;
}

unsigned long int AnyType::ToUnsignedLongInt() {
    if (type_hash != typeid(data.unsigned_long_int_data).hash_code()) {
        if (!data_present) {
            throw std::runtime_error("unassigned value of AnyType variable");
        } else{
            throw std::runtime_error("wrong type of value stored in AnyType variable");
        }
    }
    return data.unsigned_long_int_data;
}

long long int AnyType::ToLongLongInt() {
    if (type_hash != typeid(data.long_long_int_data).hash_code()) {
        if (!data_present) {
            throw std::runtime_error("unassigned value of AnyType variable");
        } else{
            throw std::runtime_error("wrong type of value stored in AnyType variable");
        }
    }
    return data.long_long_int_data;
}

unsigned long long int AnyType::ToUnsignedLongLongInt() {
    if (type_hash != typeid(data.unsigned_long_long_int_data).hash_code()) {
        if (!data_present) {
            throw std::runtime_error("unassigned value of AnyType variable");
        } else{
            throw std::runtime_error("wrong type of value stored in AnyType variable");
        }
    }
    return data.unsigned_long_long_int_data;
}

bool AnyType::ToBool() {
    if (type_hash != typeid(data.bool_data).hash_code()) {
        if (!data_present) {
            throw std::runtime_error("unassigned value of AnyType variable");
        } else{
            throw std::runtime_error("wrong type of value stored in AnyType variable");
        }
    }
    return data.bool_data;
}

char AnyType::ToChar() {
    if (type_hash != typeid(data.char_data).hash_code()) {
        if (!data_present) {
            throw std::runtime_error("unassigned value of AnyType variable");
        } else{
            throw std::runtime_error("wrong type of value stored in AnyType variable");
        }
    }
    return data.char_data;
}

signed char AnyType::ToSignedChar() {
    if (type_hash != typeid(data.char_data).hash_code()) {
        if (!data_present) {
            throw std::runtime_error("unassigned value of AnyType variable");
        } else{
            throw std::runtime_error("wrong type of value stored in AnyType variable");
        }
    }
    return data.signed_char_data;
}

unsigned char AnyType::ToUnsignedChar() {
    if (type_hash != typeid(data.char_data).hash_code()) {
        if (!data_present) {
            throw std::runtime_error("unassigned value of AnyType variable");
        } else{
            throw std::runtime_error("wrong type of value stored in AnyType variable");
        }
    }
    return data.unsigned_char_data;
}

wchar_t AnyType::ToWchar_t() {
    if (type_hash != typeid(data.wchar_t_data).hash_code()) {
        if (!data_present) {
            throw std::runtime_error("unassigned value of AnyType variable");
        } else{
            throw std::runtime_error("wrong type of value stored in AnyType variable");
        }
    }
    return data.wchar_t_data;
}

float AnyType::ToFloat() {
    if (type_hash != typeid(data.float_data).hash_code()) {
        if (!data_present) {
            throw std::runtime_error("unassigned value of AnyType variable");
        } else{
            throw std::runtime_error("wrong type of value stored in AnyType variable");
        }
    }
    return data.float_data;
}

double AnyType::ToDouble() {
    if (type_hash != typeid(data.double_data).hash_code()) {
        if (!data_present) {
            throw std::runtime_error("unassigned value of AnyType variable");
        } else{
            throw std::runtime_error("wrong type of value stored in AnyType variable");
        }
    }
    return data.double_data;
}

long double AnyType::ToLongDouble() {
    if (type_hash != typeid(data.long_double_data).hash_code()) {
        if (!data_present) {
            throw std::runtime_error("unassigned value of AnyType variable");
        } else{
            throw std::runtime_error("wrong type of value stored in AnyType variable");
        }
    }
    return data.long_double_data;
}