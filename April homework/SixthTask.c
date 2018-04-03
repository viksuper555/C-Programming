#include <stdio.h>
#include <stdlib.h>

int swap_bits(int n, int position1, int position2);
int main(int argc, char **argv)
{
    unsigned int n = atoi(argv[1]);
    int pos1 = atoi(argv[2]);
    int pos2 = atoi(argv[3]);
    int result = swap_bits(n, pos1, pos2);
    printf("%d",result);
    return 0;
}
int swap_bits(int n, int position1, int position2)
{
    int pos1_state,pos2_state;
    if(n &(1<< (position1-1)))
        pos1_state = 1;
    else
        pos1_state = 0;
    if(n & (1 << (position2-1)))
        pos2_state = 1;
    else
        pos2_state = 0;
    if((pos1_state == 1 && pos2_state == 0) || (pos1_state == 0 && pos2_state == 1))
        {
            n = n ^ (1 << (position1-1));
            n = n ^ (1 << (position2-1));
        }
    return n;
}
