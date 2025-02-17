/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    float x,y;
    printf("Enter operator either + or - or * or divide: ");
    scanf("%c",&c);
    printf("Enter two operands: ");
    scanf("%f %f", &x, &y);

    switch(c)
    {
        case '+':
            printf("%.2f + %.2f = %.2f",x,y,x+y);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f",x,y,x-y);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f",x,y,x*y);
            break;
        case '/':
            printf("%.2f / %.2f = %.2f",x,y,x/y);
            break;
        default:
        printf("Error!!");
    }
    return 0;
}
