#include <iostream>
#include <time.h>

using namespace std;


int skillCheck(int skillValue)
{
    int success = 0;
    int roll = 0;

    for(int i=1;i<=skillValue;i++)
    {
        roll = rand() %6 +1;
        cout<<roll<<"\n";
        if (roll == 6)
            success+=1;
    }
    return success;

}
int main()
{
    
    srand(time(NULL));

    int success = skillCheck(5);

    printf("Your skill succeeded %d times.",success);





    return 0;
}
