/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void reversArray(int arr[],unsigned int size);

int main()
{
    int arr[100];
    unsigned int size,i;
    printf("Enter size: ");
    scanf("%d",&size);
    
    printf("Enter elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    reversArray(arr,size);
    
    printf("Reversed array: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

void reversArray(int arr[],unsigned int size)
{
    int i,temp;
    
    for(i = 0; i < size/2; i++)
    {
        temp = arr[size-i-1];
        arr[size-i-1] = arr[i];
        arr[i] = temp;
    }
}






