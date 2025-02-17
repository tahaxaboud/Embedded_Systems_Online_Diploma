/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

unsigned int sumDigits(unsigned int number);

int main()
{
    int number;
    printf("Input: ");
    scanf("%u",&number);
    printf("Output: %d",sumDigits(number));

    return 0;
}

unsigned int sumDigits(unsigned int number)
{
    unsigned int sum = 0;
    while(number!=0)
    {
        sum += number%10;
        number /= 10;
    }
    
    return sum;
}


