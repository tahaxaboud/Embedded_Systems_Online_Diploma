/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    char reverse[100];
    int i,length;
    
    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    fgets(text, sizeof(text), stdin);
    
    length = strlen(text)-1;

    for (i = 0; i<length; i++)
	{
	    reverse[i] = text[length-i-1];
	}
    reverse[length] = '\0';
    
    printf("Reverse string is = %s",reverse);
    return 0;
}
