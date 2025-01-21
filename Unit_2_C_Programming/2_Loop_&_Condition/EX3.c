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
    float a,b,c,max;
    printf("Enter three numbers: ");
    scanf("%f %f %f",&a,&b,&c);

    if(a>=b && a>=c)
    {
        max = a;
    }
    if(b>=a && b>=c)
    {
        max = b;
    }
    if(c>=a && c>=b)
    {
        max = c;
    }
    printf("Max is %f", max);
    return 0;
}
