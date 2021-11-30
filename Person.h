//
// Created by olivier on 29/11/2021.
//

#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#include <iostream>
#include <cstring>
#include <new>

using namespace std;

class Person {
    public:

    Person();
    Person(std::string firstname,std::string lastname);
    Person(std::string firstname,std::string lastname,std::string mail);
    virtual ~Person();

    string getFirstname();
    void setFirstname(string firstname);

    string getLastname();
    void setLastname(string lastname);

    string getMail();
    void setMail(string mail);

    string getUserName();

    protected:
    private:
    string firstname;
    string lastname;
    string mail;
    string address;
    time_t birthday{};
};


#endif //UNTITLED_PERSON_H
