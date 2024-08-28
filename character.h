#pragma once
#include <iostream>
#include <string>



class Character
{

    public: 
    bool isParty;
    bool isFoe;
    std::string name;
    int hp;
    int stamina;
    int damage;
    int extraTurn;
    bool activeTurn;
    Character();
    Character(std::string n);
    void extraTurnCalc();

    void npcTurn();

    void playerTurn();
    int attack(Character attacker, Character defender);

};
