#ifndef WEAPONSLIST_H
#define WEAPONSLIST_H

#include "Weapon.h"
#include <string>
#include <vector>

class WeaponsList
{
    const std::string m_listFile{ "weaponsList.txt" };
    std::vector<Weapon> m_list;
    char m_delimiter{ ';' };

public:
    WeaponsList();

    const std::vector<Weapon>& get_list() { return m_list; }
    
};

#endif // WEAPONSLIST_H