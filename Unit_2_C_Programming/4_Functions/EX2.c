/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

unsigned long long factorial(int n);

int main()
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);
    printf("Factrial of %d is : %llu ", number, factorial(number));

    return 0;
}

unsigned long long factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return (n*factorial(n-1));
}