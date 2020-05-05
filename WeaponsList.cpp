#include "WeaponsList.h"
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>

// Constructor
WeaponsList::WeaponsList()
{
    std::ifstream listStream{m_listFile};

    if (!listStream)
    {
        std::cerr << "Error trying to read the file containing the list of characters.\n";
        std::cerr << "Make sure the file < " << m_listFile << " > exists.\n";
    }

    std::string strInput;

    while ( std::getline(listStream, strInput) )
    {
        std::vector<std::string> attackTool;

        if ( strInput.size() > 0 )
        {
            std::stringstream ss(strInput);
            std::string token;
            while( std::getline(ss, token, m_delimiter) )
            {
                attackTool.push_back(token);
                int tempNum;
                if ( ! (std::istringstream(token) >> tempNum) ) tempNum = 0;
            }

            m_list.push_back(attackTool);
        }
    }
    listStream.close();


}