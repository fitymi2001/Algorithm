#include <stdio.h>
#include "sort.h"

void bubble_sort(int DataSet[], int Length) {
	int i = 0;
	int j = 0;
	int temp = 0;

	for (i = 0; i < Length-1; i++)
	{
		for ( j = 0; j < Length-(i+1); j++)
		{
			if (DataSet[j] > DataSet[j + 1]) 
			{
				temp = DataSet[j + 1];
				DataSet[j + 1] = DataSet[j];
				DataSet[j] = temp;
			}
		}
	}
	
	return;
}