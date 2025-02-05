/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

unsigned int countOnes(unsigned int number);

int main()
{
    int number;
    printf("Input: ");
    scanf("%u",&number);
    printf("Output: %u",countOnes(number));

    return 0;
}
unsigned int countOnes(unsigned int number)
{
    int counter = 0;
    while(number>0)
    {
        if (number & 1)
        {
            counter++;
        }
        number >>= 1;
    }
    return counter;
}


