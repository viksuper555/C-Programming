#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main()
{
    int position = 0;
    char words[30] = " ", morse[100];
    fgets(words,30,stdin);
    for(int i=0; i<strlen(words);i++)
    {
        if(words[i] >= 'A' && words[i] <= 'Z')
                    words[i] = words[i] + 32;
    }
    int a =0;
    for(int j = 0; j < strlen(words); j++)
    {
        switch(words[j])
            {
                case 'a':
                    strcat(morse,". -");
                    break;
                case 'b':
                    strcat(morse, "- . . .");
                    break;
                case 'c':
                    strcat(morse, "- . - .");
                    break;
                case 'd':
                    strcat(morse, "- . .");
                    break;
                case 'e':
                    strcat(morse, ".");
                    break;
                case 'f':
                    strcat(morse, ". . - .");
                    break;
                case 'g':
                    strcat(morse, "- - .");
                    break;
                case 'h':
                    strcat(morse, ". . . .");
                    break;
                case 'i':
                    strcat(morse, ". .");
                    break;
                case 'j':
                    strcat(morse, ". - - -");
                    break;
                case 'k':
                    strcat(morse, "- . -");
                    break;
                case 'l':
                    strcat(morse, ". - . .");
                    break;
                case 'm':
                    strcat(morse, "- -");
                    break;
                case 'n':
                    strcat(morse, "- .");
                    break;
                case 'o':
                    strcat(morse, "- - -");
                    break;
                case 'p':
                    strcat(morse, ". - - .");
                    break;
                case 'q':
                    strcat(morse, "- - . -");
                    break;
                case 'r':
                    strcat(morse, ". - .");
                    break;
                case 's':
                    strcat(morse, ". . .");
                    break;
                case 't':
                    strcat(morse, "-");
                    break;
                case 'u':
                    strcat(morse, ". . -");
                    break;
                case 'v':
                    strcat(morse, ". . . -");
                    break;
                case 'w':
                    strcat(morse, ". - -");
                    break;
                case 'x':
                    strcat(morse, "- . . -");
                    break;
                case 'y':
                    strcat(morse, "- . - -");
                    break;
                case 'z':
                    strcat(morse, "- - . .");
                    break;
                    
                case '0':
                    strcat(morse, "- - - - -");
                    break;
                case '1':
                    strcat(morse, ". - - - -");
                    break;
                case '2':
                    strcat(morse, ". . - - -");
                    break;
                case '3':
                    strcat(morse, ". . . - -");
                    break;
                case '4':
                    strcat(morse, ". . . . -");
                    break;
                case '5':
                    strcat(morse, ". . . . .");
                    break;
                case '6':
                    strcat(morse, "- . . . .");
                    break;
                case '7':
                    strcat(morse, "- - . . .");
                    break;
                case '8':
                    strcat(morse, "- - - . .");
                    break;
                case '9':
                    strcat(morse, "- - - - .");
                    break;
                case ' ':
                    strcat(morse,"    ");
                    a = 1;
                    break;
            }
            if(a == 0)
                strcat(morse,"   ");
            a = 0;
    }
    printf("%s",morse);
    return 0;
}

