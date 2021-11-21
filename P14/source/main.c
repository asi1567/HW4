#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 3
#define EXAMS 4

int minimun(const int grades[][EXAMS], int pupils, int tests);
int maximun(const int grades[][EXAMS], int pupils, int tests);
double average(const int setOfGrades[], int tests);
void printArray(const int grades[][EXAMS], int pupils, int tests);

int main(void)
{
	int student;
	const int studentGrades[STUDENTS][EXAMS] = 
	{ {77,68,86,73},
	  {96,87,89,78},
	  {70,90,86,81} };

	printf("The array is: \n");
	printArray(studentGrades, STUDENTS, EXAMS);
	printf("\n\nLowest grade: %d\nHighest grade: %d\n",
		minimun(studentGrades, STUDENTS, EXAMS),
		maximun(studentGrades, STUDENTS, EXAMS));

	for (student = 0; student < STUDENTS; student++)
	{
		printf("The average grade for each student %d is %.2f\n",
			student, average(studentGrades[student],EXAMS));
	}
	system("pause");
	return 0;
}

void printArray(const int grades[][EXAMS], int pupils, int tests)
{
	printf("\t\t [0]  [1]  [2]  [3]");

	for (int i = 0; i < pupils; i++)
	{
		printf("\nstudentGrades[%d] ", i);
		for (int j = 0; j < tests; j++)
		{
			printf("%-5d", grades[i][j]);
		}
	}
}

int minimun(const int grades[][EXAMS], int pupils, int tests)
{
	int lowGrade = 100;

	for (int i = 0; i < pupils; i++)
	{
		for (int j = 0; j < tests; j++)
		{
			if (grades[i][j] < lowGrade)
			{
				lowGrade = grades[i][j];
			}
		}
	}
	return lowGrade;
}

int maximun(const int grades[][EXAMS], int pupils, int tests)
{
	int highGrade = 0;

	for (int i = 0; i < pupils; i++)
	{
		for (int j = 0; j < tests; j++)
		{
			if (grades[i][j] > highGrade)
			{
				highGrade = grades[i][j];
			}
		}
	}
	return highGrade;
}

double average(const int setOfGrades[], int tests)
{
	int total = 0;

	for (int i = 0; i < tests; i++)
	{
		total += setOfGrades[i];
	}
	return(double)total / tests;
}

