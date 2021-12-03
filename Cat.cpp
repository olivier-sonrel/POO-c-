#include <string>
#include <utility>
#include <iomanip>
#include "Cat.h"

Cat::~Cat() = default;

/**
 * default constructor
 * @param firstname
 * @param lastname
 * @param species
 * @param size
 * @param weight
 * @param gender
 * @param birthday
 */
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

/**
 * form constructor
 * @param firstname
 * @param lastname
 * @param species
 * @param size
 * @param weight
 * @param gender
 * @param birthday
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

    //change the string into time_t
    struct std::tm tm{};
    std::istringstream ss(birthday);
    ss >> std::get_time(&tm, "%y:%m:%d");
    time_t date = mktime(&tm);
    this->setBirthday(date);
}

/**
 *
 * @return
 */
string Cat::getSpecies() {
    return this->species;
}

/**
 *
 * @param species
 */
void Cat::setSpecies(string species) {
    this->species = std::move(species);
}


ostream& operator << (ostream &os, Cat &s) {
    //return (os << "Name: " << s.firstname << "\n Age: " << s.age << "\n Final Grade: " << s.finalGrade  << std::endl);
    return (os << "Name: " << s.getAllName() << "\n Age: " << s.getLastname() << "\n Final Grade: " << s.finalGrade  << std::endl);
}

string Cat::toString() const {
    stringstream ss;
    ss << (*this);
    return ss.str();
}

