#include <iostream>
#include "character.h"

using namespace std;


   
    void Character::extraTurnCalc()
{
    cout<<"Add speed to extra turn";
    return;

};

    void Character::npcTurn()
{
    return;

};

    void Character::playerTurn()
{
    return;

};

int Character::attack(Character attacker, Character defender)
{
    //Need to change to where the character damages itself if the attack succeeds
    defender.hp -= attacker.damage;
    return defender.hp;

};
   
