#include "sort.h"

int Bubble_sort(int run_check, int** DataSet) {
	if (run_check == 0) return 0;

	int i, tmp, length = _msize(*DataSet) / sizeof(int);
	char key_input = 0;

	// print arr

	printf("\n\n                                                         *TIP* [ Enter를 눌러 돌아가기 ]");
	printf("\n\n                                                   입력된 값 = ");
	for (i = 0; i < length; i++) {
		printf("%d ", (*DataSet)[i]);
	}

	for (i = 0; i < length-1; i++)
	{
		for ( int j = 0; j < length-(i+1); j++)
		{
			if ((*DataSet)[j] > (*DataSet)[j + 1]) 
			{
				tmp = (*DataSet)[j + 1];
				(*DataSet)[j + 1] = (*DataSet)[j];
				(*DataSet)[j] = tmp;
			}
		}
	}


	printf("\n\n                                                   정렬된 값 = ");
	for (i = 0; i < length; i++) {
		printf("%d ", (*DataSet)[i]);
	}
	while (1) {
		if (_getch() == 13) break;
	}
	return 0;
}