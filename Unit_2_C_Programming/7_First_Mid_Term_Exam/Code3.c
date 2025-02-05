/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void printPrimeNumbers(int start, int end);
int isPrime(int number);

int main()
{
    int start,end;
    printf("Enter two numbers: ");
    scanf("%d%d",&start,&end);
    
    printPrimeNumbers(start,end);
    
    return 0;
}

void printPrimeNumbers(int start, int end)
{
    int i;
    for(i=start;i<end;i++)
    {
        if(isPrime(i))
        {
            printf("%d ",i);
        }
    }
}

int isPrime(int number)
{
    if(number<2)
    {
        return 0;
    }
    for(int i = 2 ; i*i<= number; i++)
    {
        if(number%i == 0)
        {
            return 0;
        }
    }
    return 1;
}






