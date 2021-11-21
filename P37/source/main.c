#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int linearSearch(const int array[], int key, int size);

int main(void)
{
	int a[SIZE], searchKey, element;
	
	for (int i = 0; i < SIZE; i++)
	{
		a[i] = 2 * i;
	}

	printf("Enter integer search key:\n");
	scanf_s("%d", &searchKey);

	element = linearSearch(a, searchKey, SIZE);

	if (element != -1)
	{
		printf("Found value in element %d\n", element);
	}
	else
	{
		printf("Value not found\n");
	}
	system("pause");
	return 0;
}

int linearSearch(const int array[], int key, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] == key)
		{
			return i;
		}
	}
	return -1;
}