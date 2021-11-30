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

    std::cout << "Hello : " + cat->getAllName() + ' ' + cat->stringGender() << std::endl;
    std::cout << "Hello : " + person->getAllName() + ' ' + person->getMail() << std::endl;
    return 0;
}
