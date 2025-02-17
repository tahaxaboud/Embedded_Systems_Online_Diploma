/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a[2][2];
    float b[2][2];
    int i,j;
    
    printf("Enter the elements of 1st matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%f",&a[i][j]);
        }
    }

    printf("Enter the elements of 2nd matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%f",&b[i][j]);
        }
    }
    
    printf("Sum Of Matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            a[i][j] += b[i][j];
            printf("%0.1f ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
