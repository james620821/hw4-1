#include<stdio.h>
#include<stdlib.h>

void staticArrayinit(void);
void automaticArrayinit(void);

int main(void)
{
	printf("Firxt call to each function: \n");
	staticArrayinit();
	automaticArrayinit();

	printf("\n\nSecond call to each function: \n");
	staticArrayinit();
	automaticArrayinit();
	printf("\n");
	system("pause");
	return 0;
}

void staticArrayinit(void)
{
	static int array1[3];
	int i;

	printf("\nValues on entering staticArrayinit: \n");

	for (i = 0; i <= 2; i++)
	{
		printf("array1[%d] = %d  ", i, array1[i]);
	}

	printf("\nValues on exiting staticArrayinit: \n");

	for (i = 0; i <= 2; i++)
	{
		printf("array1[%d] = %d  ", i, array1[i] += 5);
	}
}

void automaticArrayinit(void)
{
	int array2[3] = { 1, 2, 3 };
	int i;

	printf("\n\nValues on entering staticArrayinit: \n");

	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d  ", i, array2[i]);
	printf("\nValues on exiting staticArrayinit: \n");
	
	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d  ", i, array2[i] += 5);
}
