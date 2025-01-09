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
    float a;
    printf("Enter a numbers: ");
    scanf("%f",&a);

    if(a>0)
    printf("%f is positive",a);
    else if(a<0)
    printf("%f is negative",a);
    else
    printf("You entered zero");
    return 0;
}
