#include "sort.h"

int Selection_sort(int run_check, int **DataSet) {
	if (run_check == 1) return 0;

	int i, tmp, length = _msize(*DataSet)/sizeof(int);
	char key_input = 0;

	// print arr

	printf("\n\n                                                         *TIP* [ Enter�� ���� ���ư��� ]");
	printf("\n\n                                                   �Էµ� �� = ");
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

	printf("\n\n                                                   ���ĵ� �� = ");
	for (i = 0; i < length; i++) {
		printf("%d ", (*DataSet)[i]);
	}
	while (1) {
		if (_getch() == 13) break;
	}
	return 0;
}