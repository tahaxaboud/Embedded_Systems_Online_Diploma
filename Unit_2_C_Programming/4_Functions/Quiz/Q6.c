/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int valueFourthLSB(int number);

int main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);

	printf("%d",valueFourthLSB(number));
	return 0;
}

int valueFourthLSB(int number)
{
    return (number >> 3) & 1;
}