#include <stdio.h>
#include <string.h>


int main()
{
    char string[50];
    fgets(string, 50, stdin);
    for(int i = 0;i<strlen(string);i++)
        {
            char result[2] = "";
            if(string[i] <= 'G' && string[i] >= 'A' && string[i] != 'm')
            {
                    result[0] = string[i];
                if(string[i+1] == 'm')
                    result[1] = 'm';
                printf("%c%c\n",result[0],result[1]);
            }
            memset(result,'\0',2);
                
        }
    return 0;
}   
