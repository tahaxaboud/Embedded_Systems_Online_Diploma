/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


void reverseSentence();

int main()
{

	printf ("Enter a sentence: ");
	fflush(stdin);	fflush(stdout);
	reverseSentence(); 

	return 0;
}
void reverseSentence()
{
	char c;
	scanf("%c", &c);
	if (c != '\n')
	{
		reverseSentence(); 
		printf("%c", c);
	}
}
