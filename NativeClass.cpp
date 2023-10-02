#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include "NativeClass.h"

void NativeClass::addItems() {
    char* chars =  new char[802400000];
    for (int i=0; i<802400000; i++) {
        chars[i] = 'c';
    
        
    }
    holderList.push_back(chars);
    sleep(20);
}

int NativeClass::countItems() {
    return holderList.size();
}
