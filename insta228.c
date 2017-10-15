#include <stdio.h>

#define SWAP(a,b) {int temp;temp = a;a = b;b = temp;} 
#define NUM_ARRAY 10

int main()
{
	int a[NUM_ARRAY],b[NUM_ARRAY];
	printf("input 10 num for array A\n");
	for(int i = 0; i < NUM_ARRAY; i++)
	{
		scanf("%d",a[i]);
	}
	
	printf("input 10 num for array B\n");
	for(int i = 0; i < NUM_ARRAY; i++)
	{
		scanf("%d",b[i]);
	}

	for(int i = 0; i < NUM_ARRAY; i++)
	{
		SWAP(a[i],b[i]);
	}

	printf(" array A:\n");
	for(int i = 0; i < NUM_ARRAY; i++)
	{
		printf("%d \t",a[i]);
	}
	printf(" array B:\n");
	for(int i = 0; i < NUM_ARRAY; i++)
	{
		printf("%d \t",b[i]);
	}
}
