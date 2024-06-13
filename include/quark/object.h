#ifndef QUARK_OBJECT_H
#define QUARK_OBJECT_H

#include <string>

namespace quark {
    class Object{
        public:
            enum class Type {
                Blob,
                Tree,
                Commit
            };
            Object(Type type, const std::string& data);
            Type getType() const;
            std::string getData() const;

        private:
            Type type;
            std::string data;
    };
}

#endif