/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

unsigned int sumNumbers(int n);

int main()
{
    printf("The sum of numbers from 1 to 100 = %u",sumNumbers(100));

    return 0;
}

unsigned int sumNumbers(int n) 
{
    return (n * (n + 1)) / 2;
}