#include "Barbarian.h"
#include "Character.h"
#include <string>

Barbarian::Barbarian(std::string name, int health)
{
    m_name = name;
    m_health = health;
    m_weapon = new Weapon();
    m_rage = 1;
}

Barbarian::~Barbarian()
{
    m_weapon = 0;
    delete m_weapon;
}