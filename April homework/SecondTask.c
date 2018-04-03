#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    
    float wanted_eggs = atoi(argv[1]),sum=0;
    
    for(int i=2;i<argc;i++)
    {
        float egg_per_hour = atoi(argv[i]);
        sum+= egg_per_hour;
        
    }
    float result = wanted_eggs/sum;
    printf("%.4f",result);
    return 0;
}
