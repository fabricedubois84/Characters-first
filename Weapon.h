#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>
#include <vector>


class Weapon
{
private:
    int m_id;
    std::string m_name;
    int m_damage;
    std::string m_description;

public:
    // Constructors
    Weapon();
    Weapon(int id);
    Weapon(std::vector<std::string> &attackWeapon);

    // Destructor
    ~Weapon();

    // Getters
    const int& get_damage() { return m_damage; }
    const std::string& get_name() { return m_name; }
    const std::string& get_description() { return m_description; }


    // Setters
    void set_damage(int damage) { m_damage = damage; }
    void set_name(std::string name) { m_name = name; }
    void set_description(std::string description) { m_description = description; }

};

#endif // WEAPON_H