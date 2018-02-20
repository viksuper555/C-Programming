#include <stdio.h>
#include <string.h>

int to_integer(char*);
int main()
{
    char string[20];
    fgets(string,20,stdin);
    int sum = to_integer(string);
    printf("%d\n",sum);
    return sum;
    
}
int to_integer(char* string)
{   
    int sum = 0,current_number = 0;
    for(int i=0;i<strlen(string)-1;i++)
    {
        
        if(string[i] != ' ')
        {
        
        current_number *= 10;
        
        current_number += (string[i] - '0');
        
        }
        else
        {
            sum += current_number;
            current_number = 0;
        }
    }
    sum += current_number;
    return sum;
    
}

