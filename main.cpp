#include "CharactersList.h"
#include "WeaponsList.h"
#include "Barbarian.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>

#include <typeinfo>



int menu();
void createMenu( CharactersList &list );
void presentationMenu( CharactersList &list );


int main(int argc, char *argv[])
{
//    int menuChoice{0};
    CharactersList charactersList;
/*
    do
    {
        menuChoice = menu();

        switch ( menuChoice )
        {
            case 1: createMenu(charactersList); break;
            case 2: presentationMenu(charactersList); break;
            default: break;
        }

    } while ( menuChoice != static_cast<int>(0) );

    if ( ! charactersList.listBackup() )
    {
        std::cerr << "List not backed up :-( \n";
    }
    else {
        std::cout << "Back up of list successful!\n";
    }
*/

/*    if (argc > 1)
    {
        int listSize = argc - 1;
        std::vector<Character> charList;

        //Character *charactersList{ new Character[listSize]{} };

        for ( int i = 0; i < listSize; ++i )
        {
            charList.push_back(Character{argv[i+1]});
        }

        for ( auto player : charList )
        {
            player.presentation();
        }
    }
*/
/*
    Barbarian *claire{0};
    claire = new Barbarian{"Claire the Barbarian"};

    if ( claire == nullptr )
    {
        std::cout << "This is a null pointer nullptr\n";
    }
    else
    {
        std::cout << *claire << "\n";
    }
    delete claire;
*/
    return 0;
}


int menu()
{
    int choice;

    std::cout << "\nMain Menu\n";
    std::cout << "1 - Create new Character;\n";
    std::cout << "2 - Display existing characters profiles;\n";
    std::cout << "0 - exit.\n";
    std::cout << "Your choice: ";

    std::cin >> choice;
    std::cin.ignore(32767, '\n'); // ignore up to 32767 characters until a \n is removed

    if ( choice >= 0 && choice <= 2 )
        return choice;
    else
        return 0;
}

void createMenu( CharactersList &list )
{
    std::string charName;
    std::cout << "Creating a new Character. Health will default at 100 points\n";
    std::cout << "Type the name of your character: \n";
    std::getline(std::cin, charName);

    if ( !(charName.empty())  )
    {
        Character newPlayer{charName};
        list.addCharacter( newPlayer );
        for ( auto player : list.get_list() )
        {
//            if ( player.get_name() == charName )
//                player.presentation();
        }
    }
}

void presentationMenu( CharactersList &list )
{
    for ( auto player : list.get_list() )
    {
//        player.presentation();
    }
}