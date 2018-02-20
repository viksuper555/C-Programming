#include <stdio.h>

int main()
{
    int n,bottles[100],left = 0, right,sum=0;
    scanf("%d",&n);
    right = n-1;
    for(int i=0;i<n;i++)
        scanf("%d",&bottles[i]);
    for(int i=1;i<=n;i++) 
        {
            if(bottles[left] <= bottles[right])
            {
                sum += bottles[left] * i;
                left++;
            }
            else
            {
                sum += bottles[right] * i;
                right--; 
            }
        }
    printf("Sum: %d",sum);   
    return 0;
}


