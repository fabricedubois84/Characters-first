#ifndef CHARACTER_H
#define CHARACTER_H

#include "Weapon.h"
#include <iostream>
#include <string>
#include <map>


class Character
{
protected:
    std::string m_name;
    int m_health;
    Weapon *m_weapon;
    std::map<std::string, int> m_bag;


public:
    // Constructor
    Character(std::string name = "player", int health = 100);
    Character(std::string name, std::string health);
//    Character(std::vector<std::string> &characterArray);

    // Destructor
    ~Character();

    void presentation();

    // Getters
    const std::string &get_name() { return m_name; }
    const int &get_health() { return m_health; }

    // Setters
    void setName(std::string name)
    {
        m_name = name;
    }
    
    void setHealth(int health)
    {
        m_health = health;
    }

    // Operators

 

};


#endif //CHARACTER_H