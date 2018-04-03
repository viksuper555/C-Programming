#include <stdio.h>
#include <stdlib.h>
int find_t(int number,int k);
int stepen(int x, int y);
int main(int argc, char **argv)
{
    for(int i = 0;i<=argc-2;i+=2)
    {
        int t = find_t(atoi(argv[i+1]),atoi(argv[i+2]));
        if(t != -1)
            printf("Yes. T = %d\n",t);
        else
            printf("No.\n");
    }

    return 0;
}
int find_t(int number,int k)
{
    int count = 0, n = number,sum=0;
    while (n != 0) //counting digits
    {
        n /= 10;
        count++;
    } 
    int digit_array[count];
    n = number;
    for(int i=0 ;i<count; i++) //arranging digits in array
    {
       digit_array[count-i-1] = n % 10;
       n /= 10;
    }
    
    for(int i=0; i<count; i++) //gradate digits
    {
       sum += stepen(digit_array[i],k);
       k++;
    }
    int t = sum/number;
    if(t>0)
        return t;
    return -1;
}
int stepen(int x, int y)
{
    int result = 1;
    for(int i=0;i<y;i++)
    {
        result = result * x;
    }
    return result;
}
