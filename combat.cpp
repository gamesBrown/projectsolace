#include <iostream>
#include <string>
#include <array>

using namespace std;


class Character
{
    public: 
    bool isPlayer = false;
    bool isParty = false;
    bool isFoe = true;
    string name = "";
    int hp = 0;
    int stamina = 0;
    int damage = 5;
    int extraTurn = 0;
    bool activeTurn = false;
    
    void extraTurnCalc()
{
    cout<<"Add speed to extra turn";
    return;

};

void npcTurn()
{
    return;

};

void playerTurn()
{
    return;

};
   
};



class Combat 
{
    void displayMenu(Character combatants[], int arraySize, int turnorder)
{
   
    for (int i =0; i<arraySize;i++)
    {
        continue;
    }
    cout <<
    "Turn: "<<turnorder<<
    "Health: "<<combatants[0].hp<<" "<<
    "Stamina: "<<combatants[0].stamina<<"\n"<<
    "[Attack] [Skills]\n"
    "[Items] [Retreat]"
    "\n\n\n\n"
    <<"Enemy HP: " <<combatants[1].hp<<"\n";
    return;
};

int attack(Character attacker, Character defender)
{
    defender.hp -= attacker.damage;
    return defender.hp;

};



public: void startCombat(Character combatants[], int turnAmount)
{
  
    return;
};

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
