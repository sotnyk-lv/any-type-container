//
// Created by danyl on 1/12/2021.
//

#include <stdexcept>
#include "AnyType.h"

AnyType::AnyType() = default;

AnyType::AnyType(int value) {
    data.int_data = value;
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

AnyType::AnyType(float value) {
    data.float_data = value;
    type_hash = typeid(value).hash_code();
    type_name = typeid(value).name();
    data_present = true;
}

AnyType::~AnyType() = default;

void AnyType::DestroyData() {
    type_hash = 0;
    type_name = "";
}

void AnyType::Swap(AnyType other) {
    if (!data_present) {
        throw std::runtime_error("unassigned value for this");
    }
    if (!other.data_present) {
        throw std::runtime_error("unassigned value for other");
    }
    std::swap(data, other.data);
    std::swap(type_hash, other.type_hash);
    std::swap(type_name, other.type_name);
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
