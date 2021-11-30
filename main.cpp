#include <iostream>
#include "Person.h"
#include "Cat.h"
#include "Gender.h"
#include <new>
#include <cstring>
using namespace std;

int main() {
    auto *cat = new Cat(
            "rouq",
            "mout",
            "de goutier",
            5,
            20,
            Gender::Male,
            20/05/2001
            );
    auto *person = new Person(
            "machin",
            "machine",
            "mach@machin.mch",
            5,
            20,
            Gender::Hermaphrodite,
            20/05/2001
            );

    string name1 = cat->getAllName();
    string name2 = person->getAllName();
    std::cout << "Hello : " + name1 + name2 << std::endl;
    return 0;
}
