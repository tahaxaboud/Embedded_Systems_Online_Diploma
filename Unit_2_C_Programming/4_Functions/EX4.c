/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int powerOfNumber(int n, int exponent);

int main()
{
    int number,power;

    printf("Enter a positive integer: ");
    scanf("%d", &number);
    printf("Enter a power number: ");
    scanf("%d", &power);
    printf("Power of %d is : %d ", number, powerOfNumber(number,power));

    return 0;
}

int powerOfNumber(int n, int exponent)
{
    if (exponent == 0) {
        return 1;
    }
    else {
        return n * powerOfNumber(n, exponent - 1);
    }
}