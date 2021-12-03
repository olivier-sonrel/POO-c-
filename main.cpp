#include <iostream>
#include "Person.h"
#include "Cat.h"
#include <new>
using namespace std;

int main() {

/*    auto *cat = new Cat(
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
            );*/

    //auto *person = new Person();
    auto *cat = new Cat();

    //std::cout << person->toString() << std::endl;
    std::cout << cat->toString() << std::endl;

    return 0;
}
