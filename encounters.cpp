#include <iostream>
#include <array>
#include "character.h"
using namespace std;


 //  Takes in enemy character array of the current area - takes in current party array of the player --  combat should calculate initiative afterthat

class Encounter
{
    static Character enemyParty[];
    public:
    void generateEncounter()
    {
        Character enemyone();
        cout<<"Encounter Created!\n";
        return;
    }

    void loadEncounter(Character playerParty[],Character enemyParty[])
    {
        cout<<"Encounter Loaded.\n";
        return;
    }

};

int main()
{
    Encounter encounters;
    
    encounters.generateEncounter();
    
    return 0;

}
  
