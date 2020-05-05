#include "CharactersList.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

CharactersList::CharactersList()
{
//    std::vector<std::string> charsList;
    std::ifstream listStream{m_listFile};

    if (!listStream)
    {
        std::cerr << "Error trying to read the file containing the list of characters.\n";
        std::cerr << "Make sure the file < " << m_listFile << " > exists.\n";
    }

    std::string strInput;

    while ( std::getline(listStream, strInput) )
    {
        std::vector<std::string> player;

        if ( strInput.size() > 0 )
        {
//            charsList.push_back(strInput);
            std::stringstream ss(strInput);
            std::string token;
            while( std::getline(ss, token, m_delimiter) )
            {
                player.push_back(token);
                int tempNum;
                if ( ! (std::istringstream(token) >> tempNum) ) tempNum = 0;
            }

            m_list.push_back(Character{player[0], stoi(player[1])});
//            m_list.push_back(Character{player});
        }
    }
    listStream.close();
}

void CharactersList::addCharacter(Character &player)
{
    if ( player.get_name() != "" )
        m_list.push_back(player);
}

bool CharactersList::listBackup()
{
    std::ofstream listOfst{m_listFile, std::ios::trunc};

    if ( ! listOfst )
    {
        std::cerr << "Error trying to save list of characters in file: < " << m_listFile << " >\n";
        return false;
    }

    for ( auto player : m_list )
    {
        listOfst << player.get_name() << ";" << player.get_health() << "\n"; 
    }

    return true;
}