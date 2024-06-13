#include "quark/object.h"

using namespace quark;

Object::Object(Type type, const std::string& date)
    : type(type), data(data) {}

Object::Type Object::getType() const{
    return type;
}

std::string Object::getData() const{
    return data;
}