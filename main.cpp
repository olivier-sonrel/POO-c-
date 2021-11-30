#include <iostream>
#include "Person.h"
#include "Cat.h"
#include "Gender.h"
#include <new>
#include <cstring>
using namespace std;

int main() {
    char firstnameIn [80];
    char lastnameIn [80];
    char speciesIn [80];
    char size[2];
    char weight[2];
    char gender;
    char birthday;

    /* TODO gender stringify in gender class */
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
    cout << "Hello mister, would you register a cat ?" << endl;
    printf("Give us a firstname : ");
    cin >> firstnameIn;

    printf("Give us a lastname : ");
    cin >> lastnameIn;

    printf("Give us a species : ");
    cin >> speciesIn;

    printf("Give us a size : ");
    cin >> size;

    printf("Give us a weight : ");
    cin >> weight;

    printf("Give us a gender in this choices : ");/* TODO chice 1,2,3,4*/
    cin >> gender;

    printf("Give us a birthday format year:month:day : ");
    cin >> birthday;

    auto *cat = new Cat(
            firstnameIn,
            lastnameIn,
            speciesIn,
            size,
            weight,
            gender,
            birthday
    );

    std::cout << "Your cat : " + cat->getAllName() + ' ' + cat->stringGender() << std::endl;
    //std::cout << "Hello : " + person->getAllName() + ' ' + person->getMail() << std::endl;
    return 0;
}
