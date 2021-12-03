#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#include <iostream>
#include <cstring>
#include <new>
#include "Creature.h"

using namespace std;

class Person : public Creature {
public:
    Person();
    Person(string firstname,
           string lastname,
           string mail,
           int size,
           int weight,
           Gender gender,
           time_t birthday
    );

    Person(string firstname,
           string lastname,
           string mail,
           string address,
           string size,
           string weight,
           string gender,
           string birthday
    );
    ~Person() override;

    string getMail();

    void setMail(string mail);

    string getAddress();

    void setAddress(string address);

    string toString();

protected:
private:
    friend std::ostream &operator<<(std::ostream &, Person &);

    int i;
    string mail;
    string address;
};


#endif //UNTITLED_PERSON_H
