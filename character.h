#pragma once
#include <iostream>
#include <string>



class Character
{

    public: 
    bool isPlayer;
    bool isParty;
    bool isFoe;
    std::string name;
    int hp;
    int stamina;
    int damage;
    int extraTurn;
    bool activeTurn;
    
    void extraTurnCalc();

    void npcTurn();

    void playerTurn();
    int attack(Character attacker, Character defender);

};
