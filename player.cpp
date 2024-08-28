#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <string>
#include "character.h"

using namespace std;


class Player
{

    public: 
    std::string name;
    int hp;
    int stamina;
    int extraTurn;
    bool activeTurn;
    std::vector<std::string> inventory;
    Character party[2];
    Player(std::string n)
    {
        name = n;
    };
    
    
};


int main()
{
    Player player("Venom Viper");

    cout<< player.name <<"\n";
    cout << size(player.party)<<"\n";

    return 0;
}
