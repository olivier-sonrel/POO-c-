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
 * from string constructor
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
 * form constructor
 */
Cat::Cat() {
    char firstnameIn [80];
    char lastnameIn [80];
    char speciesIn [80];
    char size[2];
    char weight[2];
    char gender[20];
    char birthday[11];

    cout << "Hello mister, would you register a cat ?" << endl;

    printf("Give us a firstname : ");
    cin >> firstnameIn;

    printf("Give us a lastname : ");
    cin >> lastnameIn;

    printf("Give us a species : ");
    cin >> speciesIn;

    printf("Give us a size : ");
    cin >> size;

    printf("Give us a weight : ");
    cin >> weight;

    /* TODO choice 1,2,3,4 creer foreach qui parcour et creer affichage*/
    printf("Give us a gender in this choices : ");
    cin >> gender;

    printf("Give us a birthday format year:month:day : ");
    cin >> birthday;

    new(this) Cat(firstnameIn,
                     lastnameIn,
                     speciesIn,
                     size,
                     weight,
                     gender,
                     birthday);
}

/**
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
    return (os
    << "You are a Cat named: "
    << s.getAllName()
    << "\n Species: "
    << s.getSpecies()
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

string Cat::toString() {
    stringstream ss;
    ss << (*this);
    return ss.str();
}

