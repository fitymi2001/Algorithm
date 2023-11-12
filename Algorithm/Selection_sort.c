#include <stdio.h>
#include "sort.h"

void selection_sort(int** DataSet) {
	int arr[5];
	int tmp, length = sizeof(DataSet)/sizeof(int);

	// print arr

	printf("arr = ");
	for (int i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}

	// start sort

	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (arr[i] > arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	// print arr

	printf("\narr = ");
	for (int i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}
}