#include <jni.h>
#include <iostream>
#include <unistd.h>
#include "WorkerClass.h"
#include "NativeClass.h"

NativeClass *nc = new NativeClass();

JNIEXPORT void JNICALL Java_WorkerClass_doSomething
  (JNIEnv *env, jobject object, jint iterations) {
    std::cout<<iterations;
    std::cout<<nc->countItems();
    for (int i=0; i<iterations; i++) {
    nc->addItems();

    }
  
    std::cout<<nc->countItems();
  }

int main(int argc, char const *argv[])
{   
      for (int i=0; i<6; i++) {
        nc->addItems();
      }
    std::cout<<nc->countItems();
    sleep(600);
    return 0;
}
