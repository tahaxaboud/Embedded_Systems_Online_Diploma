/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int arr[100];
	int num_element, searched_num ;
	int i;

	/* Assign number of element */
	printf("Enter no of elements : ");
	scanf("%d", &num_element);

	/* Assign element values */
	for (i = 0; i < num_element; i++)
	{
		scanf("%d", &arr[i]);
	}

	/* Assign the inserted value */
	printf("Enter the element to be inserted : ");
	scanf("%d", &searched_num);

	/* Finding the location of the input number*/
	for (i = 0; i < num_element; i++)
	{
		if(arr[i] == searched_num)
		{
			printf("Number found at the location = %d",i+1);
			break;
		}
	}

	return 0;
}
