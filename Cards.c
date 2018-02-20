
#include <stdio.h>
#include <string.h>

struct card_t{
        char suit[10];
        char rank;
    };
struct card_t fight(struct card_t karta1,struct card_t karta2);
int main()
{
    struct card_t card1 = {"pika",'A'};
    struct card_t card2 = {"kupa",'A'};
    struct card_t result = fight(card1,card2);
    printf("%c\n",result.rank);
    printf("%s\n",result.suit);
    return 0;
}
int type_to_int(char suit[])
{
    switch(suit[1])
    {
        case 'p':
            return 1;
        case 'a':
            return 2;
        case 'u':
            return 3;
        case 'i':
            return 4;
    }
    return 0;
}
struct card_t fight(struct card_t karta1,struct card_t karta2)
{
    int power1,power2;
    char colors[] = {'2','3','4','5','6','7','8','9','T','J','Q','K','A'};

    for(int i = 0;i<14;i++)
    {
        if(karta1.rank == colors[i])
            power1 = i;
        if(karta2.rank == colors[i])
            power2 = i;
    }
    
    int suit1 = type_to_int(karta1.suit);
    int suit2 = type_to_int(karta2.suit);
    
    if(power1>power2)
        return karta1;
    else if(power2 > power1)
            return karta2;
    else
        if(suit1>suit2)
            return karta1;
        else if(suit1<suit2)
            return karta2;
        else
            return karta1;
}


