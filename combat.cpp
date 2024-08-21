#include <iostream>
#include <string>

using namespace std;


class Character
{
    public: 
    bool isPlayer = false;
    string name = "";
    int hp = 0;
    int stamina = 0;
    int damage = 5;
   
};


void displayMenu(Character pc, Character npc, int turnorder)
{
    cout <<
    "Turn: "<<turnorder<<
    "Health: "<<pc.hp<<" "<<
    "Stamina: "<<pc.stamina<<"\n"<<
    "[Attack] [Skills]\n"
    "[Items] [Retreat]"
    "\n\n\n\n"
    <<"Enemy HP: " <<npc.hp<<"\n";
    return;
};

int attack(Character attacker, Character defender)
{
    defender.hp -= attacker.damage;
    return defender.hp;

};



void startCombat(Character pc, Character npc)
{
    int turnorder =1;
    Character lastattack = pc;
    while (true)
    {
          if(pc.hp <=0 && npc.hp <=0)
        {
            cout<< lastattack.name<<" has won the battle!";
            break;
        }
        else if  (npc.hp <= 0)
        {
            cout<< pc.name<<" has won the battle!";
            break;
        }
        else if  (pc.hp <= 0)
        {
            cout<< npc.name<<" has won the battle!";
            break;
        }
        displayMenu(pc,npc, turnorder);
        cout <<"What would you like to do?\n"; 
        string input = "";
        cin >> input;
        cout <<"Your input was: " + input + "\n";
        if(input == "attack" ||input == "a"||input == "at")
        {
            cout<<"You attack the npc for "<<pc.damage<<" damage!\n";
            npc.hp = attack(pc,npc);
            lastattack = pc;
            
        }
        else
        {
            cout<<"Your selection was invalid, please try again.\n";
            continue;
        }

        cout <<"The enemy attacks you for " << npc.damage <<" damage!\n";
        pc.hp = attack(npc,pc);
        lastattack = npc;
        turnorder+=1;

      
       
        
        
    
        
    }
    return;
}

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


    startCombat(pc,npc);
    return 0;
}