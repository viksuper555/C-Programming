#include <stdio.h>
#include <string.h>

void transpone(char* chord, int with);
int main()
{
    char string[2] = "F";
    char* charptr = string;
    transpone(charptr, 5);
    puts(charptr);
    return 0;
}
void transpone(char* chord, int with)
{
    int num;
    if(strcmp(chord,"C") == 0)
        num = 0;
    if(strcmp(chord,"Cm") == 0)
        num = 1;
    if(strcmp(chord,"D") == 0)
        num = 2;
    if(strcmp(chord,"Dm") == 0)
        num = 3;
    if(strcmp(chord,"E") == 0)
        num = 4;
    if(strcmp(chord,"F") == 0)
        num = 5;
    if(strcmp(chord,"Fm") == 0)
        num = 6;
    if(strcmp(chord,"G") == 0)
        num = 7;
    if(strcmp(chord,"Gm") == 0)
        num = 8;
    if(strcmp(chord,"A") == 0)
        num = 9;
    if(strcmp(chord,"Am") == 0)
        num = 10;
    if(strcmp(chord,"B") == 0)
        num = 11;
    num+= with;
    if(num>= 12)
        num -= 12;
    if(num == 0)
        strcpy(chord, "C");
    if(num == 1)
        strcpy(chord, "Cm");
    if(num == 2)
        strcpy(chord, "D");
    if(num == 3)
        strcpy(chord, "Dm");
    if(num == 4)
        strcpy(chord, "E");
    if(num == 5)
        strcpy(chord, "F");
    if(num == 6)
        strcpy(chord, "Fm");
    if(num == 7)
        strcpy(chord, "G");
    if(num == 8)
        strcpy(chord, "Gm");
    if(num == 9)
        strcpy(chord, "A");
    if(num == 10)
        strcpy(chord, "Am");
    if(num == 11)
        strcpy(chord, "B");
        
}