#include "Person.h"
#include <utility>
using namespace std;

Person::~Person() = default;

Person::Person(std::string firstname,
               std::string lastname,
               std::string mail,
               int size,
               int weight,
               Gender gender,
               time_t birthday
) {
    this->setFirstname(firstname);
    this->setLastname(lastname);
    this->setMail(mail);
    this->setSize(size);
    this->setWeight(weight);
    this->setGender(gender);
    this->setBirthday(birthday);
}

string Person::getMail() {
    return this->mail;
}

void Person::setMail(string mail) {
    this->mail = std::move(mail);
}


string Person::getAddress() {
    return this->address;
}

void Person::setAddress(string address) {
    this->address = std::move(address);
}








