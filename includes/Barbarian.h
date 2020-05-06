#ifndef BARBARIAN_H
#define BARBARIAN_H

#include "Character.h"
#include <string>
#include <iostream>

class Barbarian : public Character
{
    int m_rage;

public:
    Barbarian(std::string name, int health = 100);

    virtual ~Barbarian();

    virtual void presentation(std::ostream &os) const;
};

std::ostream& operator<<(std::ostream &os, const Barbarian& player);


#endif // BARBARIAN_H