#include <stdio.h>
#include <string.h>

char to_lowercase(char letter);
char to_uppercase(char letter);
char invert(char letter);
int main()
{
    char letter = 'B';
    char new_letter = to_lowercase(letter);
    printf("%c\n", new_letter);
    new_letter = to_uppercase(letter);
    printf("%c\n", new_letter);
    
    printf("A -> %c\n",invert('A'));
    printf("a -> %c\n",invert('a'));
    return 0;
}
char to_lowercase(char letter)
{
    unsigned int mask = 1 << 5;
    letter = letter | mask;
    return letter;
}
char to_uppercase(char letter)
{
    unsigned int mask = 1 << 5;
    letter = letter & ~mask;
    return letter;
}
char invert(char letter)
{
    unsigned int mask = 1 << 5;
    return letter ^ mask;
}
