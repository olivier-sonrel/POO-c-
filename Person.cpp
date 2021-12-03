#include <string>
#include "Person.h"
#include <utility>
#include <iomanip>

Person::~Person() = default;

Person::Person(string firstname,
               string lastname,
               string mail,
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

/**
 * form constructor
 * @param firstname
 * @param lastname
 * @param size
 * @param weight
 * @param gender
 * @param birthday
 */
Person::Person(string firstname,
               string lastname,
               string mail,
               string address,
               string size,
               string weight,
               string gender,
               string birthday
               ) {
    this->setFirstname(std::move(firstname));
    this->setLastname(std::move(lastname));
    this->setMail(std::move(mail));
    this->setAddress(std::move(address));
    this->setSize(std::stoi(size));
    this->setWeight(std::stoi(weight));
    this->setGender(Gender{std::stoi(gender)});

    //change the string into time_t
    struct std::tm tm{};
    std::istringstream ss(birthday);
    ss >> std::get_time(&tm, "%y:%m:%d");
    time_t date = mktime(&tm);
    this->setBirthday(date);
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

ostream& operator << (ostream &os, Person &s) {
    return (os
            << "You are a Person named: "
            << s.getAllName()
            << "\n Mail: "
            << s.getMail()
            << "\n Address: "
            << s.getAddress()
            << "\n Birthday: "
            << s.stringBirthday()
            << "\n Size: "
            << s.getSize()
            << "\n Weight: "
            << s.getWeight()
            << "\n Gender: "
            << s.stringGender()
            << std::endl);
}

string Person::toString() {
    stringstream ss;
    ss << (*this);
    return ss.str();
}







