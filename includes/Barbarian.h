#ifndef BARBARIAN_H
#define BARBARIAN_H

#include "Character.h"
#include <string>

class Barbarian : Character
{
    int m_rage;

public:
    Barbarian(std::string name, int health = 100);

     ~Barbarian();

    virtual void presentation() const;

};

#endif // BARBARIAN_H