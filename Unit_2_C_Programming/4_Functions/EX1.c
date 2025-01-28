/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num);

int main()
{
    int start,end,i;

    printf("Enter two numbers(intervals): ");
    scanf("%d%d",&start,&end);
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i); // Print the prime number
        }
    }
    printf("\n");
    return 0;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false; 
    }
    if (num == 2) {
        return true; 
    }
    if (num % 2 == 0) {
        return false; 
    }

    // Check for factors from 3 to the square root of num
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false; 
        }
    }

    return true; 
}