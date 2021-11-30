#ifndef UNTITLED_CREATURE_H
#define UNTITLED_CREATURE_H

#include "Gender.h"
#include <cstring>

using namespace std;

class Creature {
public:
    Creature();
    virtual ~Creature();

    string getFirstname();
    void setFirstname(string firstname);

    string getLastname();
    void setLastname(string lastname);

    int getSize();
    void setSize(int size);

    int getWeight();
    void setWeight(int weight);

    Gender getGender();
    string stringGender();
    void setGender(Gender gender);

    time_t getBirthday();
    void setBirthday(time_t birthday);

    string getAllName();
protected:
private:
    string firstname;
    string lastname;
    time_t birthday{};
    int size{};
    int weight{};
    Gender gender;
};

#endif //UNTITLED_CREATURE_H
