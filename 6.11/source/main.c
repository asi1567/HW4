#include <stdio.h>
#include <stdlib.h>
#define SIZE 9

void InputArray(); 
void OutputArray();
void BubbleSort(); 

int array[SIZE];
int count = 0;

int main(void)
{
	InputArray();
	BubbleSort();
	OutputArray();
	system("pause");
	return 0;
}

void InputArray()
{
	printf("Enter numbers:\n");
	for (int i = 0; i < SIZE; i++)
	{
		scanf_s("%d", &array[i]);
		count++;
	}
}
void OutputArray()
{
	printf("Sorted numbers:\n");
	for (int i = 1; i <= count; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}
void BubbleSort()
{
	int temp;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count-i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
