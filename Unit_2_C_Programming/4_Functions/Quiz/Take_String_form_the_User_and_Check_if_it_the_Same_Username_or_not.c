/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool verifyUsername(char text[]);
char username[10] = "tahaxaboud";

int main()
{
    char text[100];

    printf("Please enter username: ");
    fflush(stdout);// Only flush the output stream
    fgets(text, sizeof(text), stdin);
    
    // Remove the newline character if it's present
    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }
    verifyUsername(text) ? printf("Same") : printf("Not same!");
    
    return 0;
}

bool verifyUsername(char text[])
{
   int i;
   if(strlen(text) != strlen(username))
   {
       return false;
   }
    for(i=0;i<sizeof(username);i++)
    {
        if(text[i] != username[i])
        {
            return false;
        }
    }
}