#include <stdio.h>

float price(float amount, float price_per_kg);
int main()
{
    int count;
    scanf("%d", &count);
    
    float amounts[count-1],prices[count-1],sum;
    for(int i = 0;i< count;i++)
    {
        scanf("%f",&prices[i]);
    }
    for(int i = 0;i<count;i++)
    {
        scanf("%f",&amounts[i]);
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
