#include <iostream>
#include <string>
#include <array>
#include "character.h"

using namespace std;






class Combat 
{
    void displayMenu(Character combatants[], int arraySize, int turnCount)
{
   
    for (int i =0; i<arraySize;i++)
    {
        continue;
    }
    cout <<
    "Turn: "<<turnCount<<
    "Health: "<<combatants[0].hp<<" "<<
    "Stamina: "<<combatants[0].stamina<<"\n"<<
    "[Attack] [Skills]\n"
    "[Items] [Retreat]"
    "\n\n\n\n"
    <<"Enemy HP: " <<combatants[1].hp<<"\n";
    return;
};




public: void startCombat(Character combatants[], int turnCounter)
{
    cout<<"Your characters are "<< combatants[0].name <<" and, "  <<combatants[1].name;
    return;
};
    Character* rollInitiative(Character combatants[], int arraySize)
    {
        
        Character turnOrder[arraySize];
        for (int i=1;i<=arraySize;i++)
        {

        }
        return turnOrder;
    }

};





/* class Npc
{

    int hp = 0;
    int stamina = 0;
    int damage = 5;
}; */

/* class Stats
{
    int hp = 0;
    int stamina = 0;
    int damage = 5;
    


}; */
int main()
{
    Combat combat = Combat();
    Character pc = Character();
    pc.hp = 25;
    pc.stamina = 25;
    pc.damage = 5;
    pc.name = "Venom Viper";
    Character npc = Character();
    npc.hp = 25;
    npc.stamina = 25;
    npc.damage = 3;
    npc.name = "Edmund";

    Character character[] = {pc,npc};


    combat.startCombat(character,1);
    return 0;
}
