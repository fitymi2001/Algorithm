#define _CRT_SECURE_NO_WARNINGS
#include "sort.h"

int Input_DataSet(int** DataSet);
int Mode_menu_view(int select_index);

void SORT_MANAGER(int select_index) {
    int** DataSet = 0; 
    Input_DataSet(&DataSet);
    switch (select_index) {
    case 0:     // ���� ����
        Selection_sort(0, &DataSet);
    case 1:     // ���� ����
        if(Bubble_sort(0) == 1){
            Incomplete();
            return;
        }
    case 2:     // ���� ����
        if(Insertion_sort(0) == 1){
            Incomplete();
            return;
        }
    case 3:     // �պ� ����
        if(Merge_sort(0) == 1) {
            Incomplete();
            return;
        }
    case 4:     // �� ����
        if(Quick_sort(0) == 1) {
            Incomplete();
            return;
        }
    case 5:     // �� ����
        if(Heap_sort(0) == 1) {
            Incomplete();
            return;
        }
    case 6:     // �� ����
        if(Shell_sort(0) == 1) {
            Incomplete();
            return;
        }
    case 7:     // ��� ����
        if(Radix_sort(0) == 1) {
            Incomplete();
            return;
        }
    }

    int select_mode = 0, key_input;
    Mode_menu_view(select_mode);

    while (1) {
        if (_kbhit()) {
            key_input = _getch();
            if (key_input == -32) {     // ��,�Ʒ� �Է�
                key_input = _getch();
                switch (key_input) {
                case UP:
                    if (select_index > 0) {
                        gotoxy(67, select_index + 7);
                        printf("  ");
                        select_index--;
                    }
                    break;
                case DOWN:
                    if (select_index < 1) {
                        gotoxy(67, select_index + 7);
                        printf("  ");
                        select_index++;
                    }
                    break;
                }
                gotoxy(67, select_index + 7);
                printf(">>");
                gotoxy(0, 0);
            }

            if (key_input == 26) {      // ctrl + z �Է�
                system("cls");
                break;
            }

            if (key_input == 13)    // Enter �Է�
            {
                if (select_index == 0)
                    sub_menu();
                else if (select_index == 1)
                    Incomplete();
                main_menu_view(select_index);
            }
        }
    }
}

int Input_DataSet(int** DataSet) {
    system("cls");
    int length = 0;
    printf("\n\n                                                         *TIP1* [  �����ʹ� ����� �����Ͽ� �Է� ]\n");
    printf("                                                         *TIP2* [  Enter�� ���� Ȯ�� ]\n");
    printf("                                                         *TIP3* [  q �Է½� ���� ȭ�� ]\n");
    printf("\n\n\n                                                              �������� ������ �Է��Ͻÿ� : ");
    scanf(" %d", &length);
    if (getchar() == 'q') { return 1; }
    *DataSet = (int*)malloc(sizeof(int) * length);
    printf("                                                            ������ �����ͼ��� �Է��Ͻÿ� : ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &((*DataSet)[i]));
        if (getchar() == 'q') { return 1; free(*DataSet); }
    }
    return 0;
}

int Mode_menu_view(int select_index) {
    printf("\n\n                                                         *TIP1* [  ����Ű�� ���� ���� ]\n");
    printf("                                                         *TIP2* [  Enter�� ������ ���� ȭ�� ]\n");
    printf("                                                         *TIP3* [  Ctrl + z�� ������ ���� ȭ�� ]");
    printf("\n\n\n                                                                      ���� ���\n");
    printf("                                                                      �н� ���\n");
    gotoxy(67, select_index + 1);
    printf(">>");
    gotoxy(0, 0);
}

//if (Input_DataSet(&DataSet) == 0) {   // ����ڿ��� ������ �� �Է¹ޱ�
//    system("cls");
//    switch (select_index) {
//    case 0:     // ���� ����
//        Selection_sort(&DataSet);
//        break;
//    case 1:     // ���� ����
//        Bubble_sort(&DataSet);
//        break;
//    case 2:     // ���� ����
//        Insertion_sort(&DataSet);
//        break;
//    case 3:     // �պ� ����
//
//        break;
//    case 4:     // �� ����
//
//        break;
//    case 5:     // �� ����
//
//        break;
//    case 6:     // �� ����
//
//        break;
//    case 7:     // ��� ����
//
//        break;
//    }
//    free(DataSet);
//}