/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 100

void swapArrays(int A[], int B[]);
void printArray(int arr[], int len);

int main()
{
    int i, lenA, lenB;
    int A[MAX_SIZE];
    int B[MAX_SIZE];

    printf("Enter the size of array A: ");
    fflush(stdout); fflush(stdin);
    scanf("%d", &lenA);

    printf("Enter %d elements for array A:\n", lenA);
    for (int i = 0; i < lenA; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the size of array B: ");
    fflush(stdout); fflush(stdin);
    scanf("%d", &lenB);

    printf("Enter %d elements for array B:\n", lenB);
    for (int i = 0; i < lenB; i++) {
        scanf("%d", &B[i]);
    }
    
    // Print arrays before swapping
    printf("Before swapping:\n");
    printf("Array A: ");
    fflush(stdout);
    printArray(A, lenA);
    printf("Array B: ");
    fflush(stdout);
    printArray(B, lenB);

    swapArrays(A,B);
    
    // Print arrays after swapping
    printf("After swapping:\n");
    printf("Array A: ");
    fflush(stdout);
    printArray(A, lenA);
    printf("Array B: ");
    fflush(stdout);
    printArray(B, lenB);

    return 0;
}

void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swapArrays(int A[], int B[])
{
    int temp[MAX_SIZE];
    int i;
    
    for (i = 0; i < MAX_SIZE; ++i) 
    {
        temp[i] = A[i];
        A[i] = B[i];
        B[i] = temp[i];
    }
}