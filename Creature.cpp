#include <iostream>
#include <string>
#include <utility>
#include <sstream>
#include "Creature.h"

Creature::Creature() = default;

Creature::~Creature() = default;

string Creature::getFirstname() {
    return this->firstname;
}

void Creature::setFirstname(string firstname) {
    this->firstname = std::move(firstname);
}

string Creature::getLastname() {
    return this->lastname;
}

void Creature::setLastname(string lastname) {
    this->lastname = std::move(lastname);
}

int Creature::getSize() {
    return this->size;
}

void Creature::setSize(int size) {
    this->size = size;
}

int Creature::getWeight() {
    return this->weight;
}

void Creature::setWeight(int weight) {
    this->weight = weight;
}

Gender Creature::getGender() {
    return this->gender;
}

/* TODO try gender stringify in gender class */
string Creature::stringGender() {
    string result = "unknown";
    switch(this->gender)
    {
        case Gender::Sexless : result = "Sexless";
        case Gender::Hermaphrodite   : result = "Hermaphrodite";
        case Gender::Male : result = "Male";
        case Gender::Female  : result = "Female";
    }
    return result;
}

void Creature::setGender(Gender gender) {
    this->gender = gender;
}

string Creature::getAllName() {
    return this->getFirstname() + ' ' + this->getLastname();
}

time_t Creature::getBirthday() {
    return this->birthday;
}

/**
 * stringify the birthday
 * Format: Mo, 15.06.2009 20:20:00
 * @return string
 */
string Creature::stringBirthday() {
    time_t date = this->getBirthday();
    tm * ptm = localtime(&date);
    char buffer[32];
    strftime(buffer, 32, "%a, %d.%m.%Y %H:%M:%S", ptm);
    return buffer;
}

void Creature::setBirthday(time_t birthday) {
    this->birthday = birthday;
}
