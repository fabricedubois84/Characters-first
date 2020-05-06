#include "Barbarian.h"
#include "Character.h"

Barbarian::Barbarian(std::string name, int health): Character{name, health}, m_rage{1}
{

}

Barbarian::~Barbarian()
{
    m_weapon = 0;
    delete m_weapon;
    std::cout << "Barbarian object destroyed\n";

}

void Barbarian::presentation(std::ostream &os) const
{
    //Character::presentation();
    os << "Rage:\t" << m_rage << "\n";
}

std::ostream& operator<<(std::ostream& os, const Barbarian & player)
{
    player.presentation(os);
    return os; 
}
