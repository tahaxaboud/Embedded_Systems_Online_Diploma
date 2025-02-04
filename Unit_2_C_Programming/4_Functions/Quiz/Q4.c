/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

unsigned int convertArray(int A[],int lenA);
void printArray(int arr[], int len);

int main()
{
    int i, lenA, lenB;
    int A[100];

    printf("Enter the size of array A: ");
    fflush(stdout); fflush(stdin);
    scanf("%d", &lenA);

    printf("Enter %d elements for array A:\n", lenA);
    for (int i = 0; i < lenA; i++) {
        scanf("%x", &A[i]);
        if (A[i] < 0x30 || A[i] > 0x39) 
        {
            printf("Invalid input: %d is not a valid ASCII digit\n", A[i]);
            return 1;
        }
    }
    

    printf("Array A: ");
    fflush(stdout);
    printArray(A, lenA);

    printf("%d", convertArray(A,lenA));
    

    return 0;
}

void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
unsigned int convertArray(int A[],int lenA)
{
    int i;
    unsigned int number = 0;
    for(i=0;i<lenA;++i)
    {
        number = number * 10 + (A[i] - '0');
    }
    return number;
}