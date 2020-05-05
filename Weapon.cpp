#include "Weapon.h"
#include <iostream>
#include <vector>
#include <string>
#include "WeaponsList.h"

// Constructor

Weapon::Weapon(): m_id{1}, m_name{"Rusty Sword"}, m_damage{1}, m_description{"Nothing"}
{
}

Weapon::Weapon(int id)
{
    
}

Weapon::Weapon(std::vector<std::string> &attackWeapon)
{
    m_id = stoi(attackWeapon[0]);
    m_name = attackWeapon[1];
    m_damage = stoi(attackWeapon[2]);
    m_description = attackWeapon[3];
}

// Destructor
Weapon::~Weapon()
{

}
