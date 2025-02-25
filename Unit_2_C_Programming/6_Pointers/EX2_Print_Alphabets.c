#include <stdio.h>

int main()
{
	char alphabets[26]; //Array to store alphabets
	char* ptr;

	//Fill the array with alphabets
	for(int i=0;i<26;i++)
	{
		alphabets[i] = 'A'+ i;
	}

	ptr = alphabets;

	printf("Alphabets from A to Z:\n");
	for(int i=0;i<26;i++)
	{
		printf("%c ",*ptr);
		ptr++;
	}
	printf("\n");
    return 0;
}
