/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int clearBit(int number, unsigned int position);

int main()
{
    int number;
    unsigned int position;
    printf("Enter a number: ");
    scanf("%d",&number);
    
    printf("Enter bit position: ");
    scanf("%u",&position);

    printf("Result: %d", clearBit(number,position));
    return 0;
}

int clearBit(int number, unsigned int position)
{
    if (position >= sizeof(int) * 8)
    {
        return number;
    }
    number &= ~(1<<position);
    return number;
}