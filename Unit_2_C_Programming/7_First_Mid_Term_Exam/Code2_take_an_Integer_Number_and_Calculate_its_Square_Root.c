/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

double squareRoot(unsigned int number);

int main()
{
    int number;
    printf("Input: ");
    scanf("%u",&number);
    printf("Output: %.3lf",squareRoot(number));

    return 0;
}
double squareRoot(unsigned int number)
{
    return sqrt(number);
}


