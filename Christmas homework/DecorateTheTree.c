#include <stdio.h>
struct decoration_t{
    char type;
    int size;
};
    
struct decoration_t pick_best_ball(struct decoration_t decoration[10]);
int main()
{   
    struct decoration_t Ball[10] = {
        {'B',3},
        {'B',2},
        {'C',7},
        {'B',3},
        {'B',6},
        {'O',7},
        {'B',5},
        {'B',6},
        {'O',7},
        {'O',9}

    };

    pick_best_ball(Ball);
    return 0;
}
struct decoration_t pick_best_ball(struct decoration_t decoration[10])
{
    for(int i=0;i<10;i++)
    {
    if(decoration[i].type == 'B' && decoration[i].size > 5)
    {
        printf("%c\n%d\n",decoration[i].type,decoration[i].size);
        break;
    }
    }
}
