#include <stdio.h>
#include <string.h>

int string_compare(char *str1, char *str2);
int main()
{
    char string1[] = "alabala";
    char string2[] = "alabalb";

    return string_compare(string1,string2);

    
}

int string_compare(char *str1, char *str2)
{   
    int length = strlen(str2);
    if(strlen(str1) > strlen(str2))
        length = strlen(str1);
    
    for(int i=0;i<length;i++)
        {
            
            if(str1[i] != str2[i])
                {
                    if(str1[i] > str2[i])
                        return -1;
                    else 
                        return 1;
                }
        }
    return 0;
    
}
