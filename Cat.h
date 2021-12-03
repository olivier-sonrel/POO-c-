#ifndef UNTITLED_CAT_H
#define UNTITLED_CAT_H

#include "Creature.h"
#include <cstring>
using namespace std;

class Cat: public Creature {
public:
    Cat(string firstname,
        string lastname,
        string species,
        int size,
        int weight,
        Gender gender,
        time_t birthday
    );

    Cat(string firstname,
        string lastname,
        string species,
        string size,
        string weight,
        string gender,
        string birthday
    );
    ~Cat() override;

    string getSpecies();
    void setSpecies(string species);

protected:
private:
    string species{};
};


#endif //UNTITLED_CAT_H
