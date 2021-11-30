//
// Created by olivier on 29/11/2021.
//

#include "Person.h"
using namespace std;

Person::Person() = default;
Person::~Person() = default;

Person::Person(string firstname, string lastname) {
    this->setFirstname(firstname);
    this->setLastname(lastname);
}

Person::Person(string firstname, string lastname, string mail) {
    this->setFirstname(firstname);
    this->setLastname(lastname);
    this->setMail(mail);
}

string Person::getFirstname() {
    return this->firstname;
}

void Person::setFirstname(string firstname) {
    this->firstname = firstname;
}

string Person::getLastname() {
    return this->lastname;
}

void Person::setLastname(string lastname) {
    this->lastname = lastname;
}

string Person::getMail() {
    return this->mail;
}

void Person::setMail(string mail) {
    this->mail = mail;
}

string Person::getUserName() {
    return this->firstname + ' ' + this->lastname;
}








