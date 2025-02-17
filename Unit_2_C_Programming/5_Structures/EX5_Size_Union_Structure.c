#include <stdio.h>


union U_job
{
	char name [32] ;
	float salary;
	int worker_no;

}u;

struct S_job
{
	char name [32];
	float salary;
	int worker_no;

}s;


int main ()
{
	printf ("Size of the union is: %ld", sizeof (u));
	printf ("\nSize of the structure is: %ld", sizeof (s));

	return 0;
}