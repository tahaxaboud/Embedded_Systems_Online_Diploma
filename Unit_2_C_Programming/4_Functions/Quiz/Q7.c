/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int isPowerofThree(int number);

int main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);

	printf("%d",isPowerofThree(number));
	return 0;
}

int isPowerofThree(int number)
{
    if (number <= 0) {
        return 1;  
    }
    if (number == 1) {
        return 0;  
    }
    while(number % 3 == 0)
    {
        number /= 3;
        if(number == 1){
            return 0;
        }
    }
    return 1;
}