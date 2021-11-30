#include <string>
#include <utility>
#include "Cat.h"

Cat::~Cat() = default;
Cat::Cat(string firstname,
         string lastname,
         string species,
         int size,
         int weight,
         /*Gender gender,*/
         time_t birthday
) {
    this->setFirstname(firstname);
    this->setLastname(lastname);
    this->setSpecies(species);
    this->setSize(size);
    this->setWeight(weight);
    /*this->setGender(gender);*/
    this->setBirthday(birthday);
}

string Cat::getSpecies() {
    return this->species;
}

void Cat::setSpecies(string species) {
    this->species = std::move(species);
}