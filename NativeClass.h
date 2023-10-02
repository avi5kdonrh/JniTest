#include <jni.h>
#include <vector>
#include <string>
#ifndef NATIVECLASS_H
#define NATIVECLASS_H

class NativeClass {
                 private:
                     std::vector<std::string> holderList;
                 public:
                     void addItems();
                     int countItems();
};

#endif