#include "sort.h"

int Insertion_sort(int run_check, int** DataSet) {
	if (run_check == 0) return 0;

	int i, tmp, length = _msize(*DataSet) / sizeof(int), value;
	char key_input = 0;

	// print arr

	printf("\n\n                                                         *TIP* [ Enter를 눌러 돌아가기 ]");
	printf("\n\n                                                   입력된 값 = ");
	for (i = 0; i < length; i++) {
		printf("%d ", (*DataSet)[i]);
	}

	for (i = 1; i < length; i++)
	{
		if ((*DataSet)[i - 1] <= (*DataSet)[i])
			continue;
		value = (*DataSet)[i];

		for (int j = 0; j < i; j++)
		{
			if ((*DataSet)[j] > value)
			{
				memmove(&(*DataSet)[j + 1], &(*DataSet)[j], sizeof((*DataSet)[0]) * (i - j)); 
				(*DataSet)[j] = value;
				break;
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