#ifndef CHARACTERSLIST_H
#define CHARACTERSLIST_H

#include "Character.h"
#include <fstream>
#include <vector>
#include <string>

class CharactersList
{
    std::vector<Character> m_list;
    char m_delimiter{ ';' };
    const std::string m_listFile{"charactersList.txt"};

public:

    CharactersList();

    bool listBackup();

    void addCharacter(Character &player);

    // Getters
    const std::vector<Character> &get_list() { return m_list; }

};

#endif // CHARACTERSLIST_H