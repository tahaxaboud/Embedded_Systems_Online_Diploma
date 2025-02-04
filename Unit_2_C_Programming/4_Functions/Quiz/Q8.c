/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int lastOccurence(int A[],int lenA,int number);

int main()
{
    int lenA, number;
    int A[100];

    printf("Enter the size of array A: ");
    scanf("%d", &lenA);

    printf("Enter %d elements for array A:\n", lenA);
    for (int i = 0; i < lenA; i++) {
        scanf("%d", &A[i]);
    }

    printf("The number is: ");
    scanf("%d", &number);

    printf("Result: %d\n", lastOccurence(A, lenA, number));
    return 0;
}

int lastOccurence(int A[],int lenA,int number)
{
    int lastIndex = -1;
    for (int i = 0; i < lenA; i++) {
        if(A[i] == number)
        lastIndex = i;
    }

    return lastIndex;
}