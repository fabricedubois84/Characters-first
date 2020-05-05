#include "Barbarian.h"
#include "Character.h"
#include <string>

Barbarian::Barbarian(std::string name, int health): Character{name, health}, m_rage{1}
{

}

Barbarian::~Barbarian()
{
    m_weapon = 0;
    delete m_weapon;
    std::cout << "Barbarian object destroyed\n";

}

void Barbarian::presentation() const
{
    Character::presentation();
    std::cout << "Rage:\t" << m_rage << "\n";
}