/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int X[5];
    int sum = 0;
    int* pX = X;
    
    for(int i=0; i<sizeof(X)/sizeof(int);i++)
    {
        scanf("%d\n",pX+i);//read each entered value using pointer
    }
    
    for(int i=0; i<sizeof(X)/sizeof(int);i++)
    {
        printf("%d\n",*pX++); //print each element using pointer incrementation
    }
    pX = X;
    for(int i=0; i<sizeof(X)/sizeof(int);i++,pX++)
    {
        sum += *pX; //calculate sum using pointer dereferencing
    }
    printf("sum = %d\n", sum);
    return 0;
}
