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
    int a,i;
    unsigned long long fact = 1;
    printf("Enter a integer: ");
    scanf("%d",&a);
    if(a<0)
    printf("Error!!! Factorial of negative number doesn't exist");
    else
    {
        for(i=1;i<=a;i++)
        {
            fact *= i;
        }
        printf("Factorial = %llu",fact);
    }

    return 0;
}
