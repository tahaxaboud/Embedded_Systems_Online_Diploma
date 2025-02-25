#include <stdio.h>

struct SEmployee
{
	char* name;
	int id;
};



int main()
{
	struct SEmployee employee1 = {"Taha",159},employee2 = {"Ali",150},employee3 = {"Majd",152};

	struct SEmployee* arr[] = {&employee1,&employee2,&employee3};

	struct SEmployee* (*P_arr_emp)[3] = &arr;

	printf("Employee Name: %s \n",(*(*P_arr_emp))->name);
	printf("Employee ID: %d \n",(*(*P_arr_emp))->id);
    return 0;
}
