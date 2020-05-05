#ifndef BARBARIAN_H
#define BARBARIAN_H

#include "Character.h"
#include <string>

class Barbarian : Character
{
    int m_rage;

public:
    Barbarian(std::string name, int health);

    ~Barbarian();

    void presentation();

};

#endif // BARBARIAN_H