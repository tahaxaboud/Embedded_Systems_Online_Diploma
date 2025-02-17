/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    switch(c)
    {
        case 'a':
        case 'A':
        case 'i':
        case 'I':
        case 'e':
        case 'E':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        {
            printf("%c is a vowel",c);
        }
        break;
        default:
        {
            printf("%c is a consonent",c);
        }
        break;
    }

    return 0;
}
