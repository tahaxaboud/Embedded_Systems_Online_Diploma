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
    int i,length=0;
    
    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    fgets(text, sizeof(text), stdin);
    
    for (i = 0; text[i] != '\0' ; i++)
	{
	    length++;
	}
    
    printf("Length of string = %d",length);
    return 0;
}
