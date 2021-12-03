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
    char mailIn [80];
    char addressIn [80];
    char size[2];
    char weight[2];
    char gender[20];
    char birthday[11];

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
    //cout << "Hello mister, would you register a cat ?" << endl;
    cout << "Hello mister, would you register as a person ?" << endl;
    /*TODO put formMethod in her own class*/
    printf("Give us a firstname : ");
    cin >> firstnameIn;

    printf("Give us a lastname : ");
    cin >> lastnameIn;

/*    printf("Give us a species : ");
    cin >> speciesIn;*/

    printf("Give us a mail : ");
    cin >> mailIn;

    printf("Give us an address : ");
    cin >> addressIn;/* TODO problem espace*/

    printf("Give us a size : ");
    cin >> size;

    printf("Give us a weight : ");
    cin >> weight;

    /* TODO choice 1,2,3,4 creer foreach qui parcour et creer affichage*/
    printf("Give us a gender in this choices : ");
    cin >> gender;

    printf("Give us a birthday format year:month:day : ");
    cin >> birthday;

/*    auto *cat = new Cat(
            firstnameIn,
            lastnameIn,
            speciesIn,
            size,
            weight,
            gender,
            birthday
    );*/
    auto *person = new Person(
            firstnameIn,
            lastnameIn,
            mailIn,
            addressIn,
            size,
            weight,
            gender,
            birthday
    );

/* TODO tostring Person*/
    std::cout << person->toString() << std::endl;
    //std::cout << cat->toString() << std::endl;
    //std::cout << "Hello : " + person->getAllName() + ' ' + person->getMail() << std::endl;
    return 0;
}
