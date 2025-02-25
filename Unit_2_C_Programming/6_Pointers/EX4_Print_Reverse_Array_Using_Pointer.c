#include <stdio.h>

int main()
{
    int arr[15];
    int *P_arr = arr;
    int size;

    printf("Input the number of elements to store in the array (max 15) :");
    fflush(stdout); fflush(stdin);
    scanf("%d",&size);

    printf("Input %u number of elements in the array :\n",size);
    for(int i=0;i<size;i++)
    {
    	printf("element - %d",i+1);
    	fflush(stdout); fflush(stdin);
    	scanf("%d",P_arr++);
    }
    printf("\n");

    P_arr = &arr[size-1];

    for(int i = size;i>0;i--)
    {
    	printf("element - %d : %d\n",i,*P_arr--);
    }

    return 0;
}
