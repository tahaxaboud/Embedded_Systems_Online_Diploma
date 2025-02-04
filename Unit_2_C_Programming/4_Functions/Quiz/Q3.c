/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void reverseArray(int A[],int lenA);
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
        scanf("%d", &A[i]);
    }
    
    // Print arrays before swapping
    printf("Before reversing:\n");
    printf("Array A: ");
    fflush(stdout);
    printArray(A, lenA);

    reverseArray(A,lenA);
    
    // Print arrays after swapping
    printf("After swapping:\n");
    printf("Array A: ");
    fflush(stdout);
    printArray(A, lenA);

    return 0;
}

void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void reverseArray(int A[],int lenA)
{
    int start = 0;
    int end = lenA - 1;

    while (start < end) 
    {
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;

        start++;
        end--;
    }
}