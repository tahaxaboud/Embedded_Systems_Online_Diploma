/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int r,c,i,j;
    int a[100][100];
    int transpose[100][100];

    printf("Enter rows and column of matrix: ");
    scanf("%d%d",&r,&c);
    
    printf("Enter elements of matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered Matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            transpose[j][i] = a[i][j];
        }
    }
    printf("Transpose Matrix:\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
