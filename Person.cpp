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

 Person::Person() {
     char firstnameIn [80];
    char lastnameIn [80];
    char speciesIn [80];
    char mailIn [80];
    char addressIn [80];
    char size[2];
    char weight[2];
    char gender[20];
    char birthday[11];

    cout << "Hello mister, would you register as a person ?" << endl;
    /*TODO put formMethod in her own class*/
    printf("Give us a firstname : ");
    cin >> firstnameIn;

    printf("Give us a lastname : ");
    cin >> lastnameIn;

/*    printf("Give us a species : ");
    cin >> speciesIn;*/

    printf("Give us a mail : ");
    cin >> mailIn;

    printf("Give us an address : ");
    cin >> addressIn;/* TODO problem espace*/

    printf("Give us a size : ");
    cin >> size;

    printf("Give us a weight : ");
    cin >> weight;

    /* TODO choice 1,2,3,4 creer foreach qui parcour et creer affichage*/
    printf("Give us a gender in this choices : ");
    cin >> gender;

    printf("Give us a birthday format year:month:day : ");
    cin >> birthday;

     new(this) Person(firstnameIn,
                      lastnameIn,
                      mailIn,
                      addressIn,
                      size,
                      weight,
                      gender,
                      birthday);
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







