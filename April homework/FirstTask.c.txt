#include <stdio.h>
#include <stdlib.h>

float price(float amount, float price_per_kg);
int main(int argc, char **argv)
{
    int count = atoi(argv[1]);
    
    float amounts[count-1],prices[count-1],sum;
    for(int i = 0;i< count;i++)
    {
        prices[i] = atof(argv[i+2]);
    }
    for(int i = 0;i<count;i++)
    {
        amounts[i] = atof(argv[i+count+2]);
    }
    for(int i = 0;i<count;i++)
    {
        sum += price(amounts[i],prices[i]);
    }
    printf("Sum = %.2f",sum);
    return 0;
    
}
float price(float amount, float price_per_kg)
{
    return amount*price_per_kg;
}
