#include <iostream>
#include "Person.h"
#include <new>
#include <cstring>
using namespace std;

int main() {
    auto *person2Atr = new Person("Olivier", "Sonrel");
    auto *person3Atr = new Person("machin", "machine", "mach@machin.mch");
    string name = person2Atr->getUserName();
    std::cout << "Hello : " + name << std::endl;
    return 0;
}
/*
 * TODO SSH connection github
 * */
