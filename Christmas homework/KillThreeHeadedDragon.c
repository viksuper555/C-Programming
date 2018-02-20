#include <stdlib.h>
#include <stdio.h>
#include <time.h>

struct human_t{
    int HP;
    int maxDMG;
};
struct creature_t{
    int heads;
    int HP;
    int maxDMG;
};

int main()
{
    srand(time(NULL));
    int target = 0,counter=0;
    struct human_t human = {100,30};
    struct creature_t dragon = {3,75,10};
    int fullHP[dragon.heads];
    for(int i = 0;i<dragon.heads;i++)
    {
        fullHP[i] = dragon.HP;
    }
   
   
    do{ 
        //human turn
        if(rand() %7 == 0)
            fullHP[target] -= 50;
        else
            fullHP[target] -= (rand() %30) + 1;
        if(fullHP[target] <= 0)
            target++;
        //dragon turn
        human.HP -= (rand() %10) + 1;

    }while(human.HP > 0 && target < dragon.heads);
    if(human.HP > 0 && 0 > fullHP[dragon.heads-1])
        printf("Human won! Health left: %d HP\n", human.HP);
    else
    {
        if(human.HP < 0 && 0 < fullHP[dragon.heads-1])
            printf("Dragon won.");
        else
            printf("Draw.");
    }
    return 0;
}
