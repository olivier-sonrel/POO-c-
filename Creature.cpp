#include <iostream>
#include <string>
#include <utility>
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

string Creature::stringGender() {
    string os = "empty";
    switch(this->gender)
    {
        case Gender::Sexless : os = "Sexless";
        case Gender::Hermaphrodite   : os = "Hermaphrodite";
        case Gender::Male : os = "Male";
        case Gender::Female  : os = "Female";
    }
    return os;
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

void Creature::setBirthday(time_t birthday) {
    this->birthday = birthday;
}
