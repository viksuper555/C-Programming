#include <stdio.h>
struct game_t{
    int id;
    float price;
    char code[2];
};
int is_game_available(struct game_t game, char country[4]);
int how_many_available(struct game_t game[10], char country[4]);
int main()
{
    struct game_t game[10] = {{1,2,"BG"},
                              {2,2,"EN"},
                              {3,2,"DE"},
                              {4,2,"BG"},
                              {5,2,"BG"}};
    int count = how_many_available(game, "BG");
    printf("%d",count);
    return 0;
}
int is_game_available(struct game_t game, char country[4])
{
    if(game.code[0] == country[0] && game.code[1] == country[1])
        return 1;
    return 0;
}
int how_many_available(struct game_t game[10], char country[4])
{
    int count=0;
    for(int i=0;i<10;i++)
    {
    if(game[i].id == 0)
        break;
    if(is_game_available(game[i],country))
        count++;
    }
    return count;
}
