int Quick_sort(int run_sort, int **DataSet()) {
	if (run_sort == 0) {
		return 1;
	}
	return 0;
}
//#include "sort.h"
//
//void Swap(int* a, int* n)
//{
//	int tmp = *a;
//	*a = *n;
//	*n = tmp;
//}
//
//int Partition(int DataSet[], int left, int right)
//{
//	int first = left, pivot = DataSet[first];
//
//	++left;
//
//	while (left <= right)
//	{
//		while (DataSet[left] <= pivot)
//		{
//			++left;
//		}
//		while (DataSet[right] > pivot)
//		{
//			--right;
//		}
//		if (left < right)
//			Swap(&DataSet[left], &DataSet[right]);
//		else
//			break;
//	}
//	Swap(&DataSet[first], &DataSet[right]);
//	
//	return right;
//}
//
//void Sort(int);
//
//int Quick_sort(int run_check, int** DataSet, int left, int right) {
//	if (run_check == 0) return 0;
//
//	int i, tmp, length = _msize(*DataSet) / sizeof(int), value;
//	char key_input = 0;
//
//	// print arr
//
//	printf("\n\n                                                         *TIP* [ Enter를 눌러 돌아가기 ]");
//	printf("\n\n                                                   입력된 값 = ");
//
//	for (i = 0; i < length; i++) {	
//		printf("%d ", (*DataSet)[i]);
//	}
//
//	if (left < right)
//	{
//		int index = Partition(DataSet, left, right);
//
//		QuickSort(DataSet, left, index - 1);
//		QuickSort(DataSet, index + 1, right);
//	}
//
//
//	printf("\n\n                                                   정렬된 값 = ");
//	for (i = 0; i < length; i++) {
//		printf("%d ", (*DataSet)[i]);
//	}
//	while (1) {
//		if (_getch() == 13) break;
//	}
//	return;
//}