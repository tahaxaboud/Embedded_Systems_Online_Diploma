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
    int a,sum=0;
    printf("Enter a integer: ");
    scanf("%d",&a);
    
    for(int i=1;i<=a;i++)
    {
        sum += i;
    }
    printf("Sum = %d",sum);
    return 0;
}
