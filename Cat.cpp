#include <string>
#include <utility>
#include <iomanip>
#include "Cat.h"

Cat::~Cat() = default;
Cat::Cat(string firstname,
         string lastname,
         string species,
         int size,
         int weight,
         Gender gender,
         time_t birthday
) {
    this->setFirstname(firstname);
    this->setLastname(lastname);
    this->setSpecies(species);
    this->setSize(size);
    this->setWeight(weight);
    this->setGender(gender);
    this->setBirthday(birthday);
}

/*
 *  Cat construct from form
 */
Cat::Cat(string firstname,
         string lastname,
         string species,
         string size,
         string weight,
         string gender,
         string birthday
         ) {
    this->setFirstname(std::move(firstname));
    this->setLastname(std::move(lastname));
    this->setSpecies(std::move(species));
    this->setSize(std::stoi(size));
    this->setWeight(std::stoi(weight));
    this->setGender(Gender{std::stoi(gender)});

    struct std::tm tm{};
    std::istringstream ss(birthday);
    ss >> std::get_time(&tm, "%y:%m:%d");
    time_t date = mktime(&tm);
    this->setBirthday(date);
}

string Cat::getSpecies() {
    return this->species;
}

void Cat::setSpecies(string species) {
    this->species = std::move(species);
}


