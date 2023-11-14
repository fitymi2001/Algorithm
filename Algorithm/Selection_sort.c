#include <stdio.h>
#include "sort.h"

void selection_sort(int** DataSet) {
	int i, tmp, length = _msize(*DataSet)/sizeof(int);
	char key_input = 0;

	// print arr

	printf("\n\n                                                         *TIP* [ Enter를 눌러 돌아가기 ]");
	printf("\n\n                                                   입력된 값 = ");
	for (i = 0; i < length; i++) {
		printf("%d ", (*DataSet)[i]);
	}

	// start sort

	for (i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if ((*DataSet)[i] > (*DataSet)[j]) {
				tmp = (*DataSet)[i];
				(*DataSet)[i] = (*DataSet)[j];
				(*DataSet)[j] = tmp;
			}
		}
	}

	// print arr

	printf("\n\n                                                   정렬된 값 = ");
	for (i = 0; i < length; i++) {
		printf("%d ", (*DataSet)[i]);
	}
	while (1) {
		if (_getch() == 13) break;
	}
	return;
}