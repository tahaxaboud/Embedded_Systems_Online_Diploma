/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i;
    float number,average;
    
    printf("Enter the numbers of data: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter number: ");
        scanf("%f",&number);
        average +=(number/n);
    }
    printf("Average = %0.2f", average);
    return 0;
}
