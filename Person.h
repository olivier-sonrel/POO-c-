#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#include <iostream>
#include <cstring>
#include <new>
#include "Creature.h"

using namespace std;

class Person: public Creature {
public:

    Person(std::string firstname,
           std::string lastname,
           std::string mail,
           int size,
           int weight,
           /*Gender gender,*/
           time_t birthday
           );
    ~Person() override;

    string getMail();
    void setMail(string mail);

    string getAddress();
    void setAddress(string address);

protected:
private:
    string mail;
    string address;
};


#endif //UNTITLED_PERSON_H
