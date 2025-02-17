/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int returnUnique(int arr[],unsigned int size);

int main()
{
    int arr[100];
    unsigned int size,i;
    printf("Enter size: ");
    scanf("%u",&size);
    
    printf("Enter elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Output: %d",returnUnique(arr,size));

    return 0;
}

int returnUnique(int arr[],unsigned int size)
{
    int i,unique = 0;
    for(i = 0; i < size ;i++)
    {
        unique ^= arr[i];
    }
    return unique;
}


