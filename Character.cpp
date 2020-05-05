#include "Character.h"
#include <iostream>
#include <sstream>

// Constructors
Character::Character(std::string name, int health): m_name{name}, m_health{health}, m_weapon{0}
{
    m_weapon = new Weapon();
}

Character::Character( std::string name, std::string health)
{
    m_name = name;
    m_health = std::stoi(health);
    m_weapon = new Weapon();
}

/*Character::Character(std::vector<std::string> &characterArray)
{
    m_name = characterArray[0];
    m_health = std::stoi(characterArray[1]);

    switch( stoi(characterArray[2]) )
    {
        case 0: m_bag.insert()
    }
}
*/

// Destructors
Character::~Character()
{
    m_weapon = 0;
    delete m_weapon;
    std::cout << "Character object destroyed\n";
}

void Character::presentation() const
{
    std::cout << "=======================\n";
    std::cout << "Character profile\n";
    std::cout << "_________________\n";
    std::cout << "Name:\t" << m_name << "\n";
    std::cout << "Heatlh:\t" << m_health << "\n";
    std::cout << "Weapon details: \n";
    std::cout << "\t- " << m_weapon->get_name() << "\n";
    std::cout << "\t- " << m_weapon->get_damage() << "\n";
    std::cout << "\t- " << m_weapon->get_description() << "\n";

}

// Operators
