#define _CRT_SECURE_NO_WARNINGS
#include "sort.h"

int Input_DataSet(int** DataSet);
int Mode_menu_view(int select_index);

void SORT_MANAGER(int select_index) {
    int** DataSet = 0; 
    Input_DataSet(&DataSet);
    switch (select_index) {
    case 0:     // 선택 정렬
        Selection_sort(0, &DataSet);
    case 1:     // 버블 정렬
        if(Bubble_sort(0) == 1){
            Incomplete();
            return;
        }
    case 2:     // 삽입 정렬
        if(Insertion_sort(0) == 1){
            Incomplete();
            return;
        }
    case 3:     // 합병 정렬
        if(Merge_sort(0) == 1) {
            Incomplete();
            return;
        }
    case 4:     // 퀵 정렬
        if(Quick_sort(0) == 1) {
            Incomplete();
            return;
        }
    case 5:     // 힙 정렬
        if(Heap_sort(0) == 1) {
            Incomplete();
            return;
        }
    case 6:     // 쉘 정렬
        if(Shell_sort(0) == 1) {
            Incomplete();
            return;
        }
    case 7:     // 기수 정렬
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
            if (key_input == -32) {     // 위,아래 입력
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

            if (key_input == 26) {      // ctrl + z 입력
                system("cls");
                break;
            }

            if (key_input == 13)    // Enter 입력
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
    printf("\n\n                                                         *TIP1* [  데이터는 띄어쓰기로 구분하여 입력 ]\n");
    printf("                                                         *TIP2* [  Enter를 눌러 확인 ]\n");
    printf("                                                         *TIP3* [  q 입력시 이전 화면 ]\n");
    printf("\n\n\n                                                              데이터의 개수를 입력하시오 : ");
    scanf(" %d", &length);
    if (getchar() == 'q') { return 1; }
    *DataSet = (int*)malloc(sizeof(int) * length);
    printf("                                                            정렬할 데이터셋을 입력하시오 : ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &((*DataSet)[i]));
        if (getchar() == 'q') { return 1; free(*DataSet); }
    }
    return 0;
}

int Mode_menu_view(int select_index) {
    printf("\n\n                                                         *TIP1* [  방향키를 통해 조작 ]\n");
    printf("                                                         *TIP2* [  Enter를 누르면 다음 화면 ]\n");
    printf("                                                         *TIP3* [  Ctrl + z를 누르면 이전 화면 ]");
    printf("\n\n\n                                                                      빠른 모드\n");
    printf("                                                                      학습 모드\n");
    gotoxy(67, select_index + 1);
    printf(">>");
    gotoxy(0, 0);
}

//if (Input_DataSet(&DataSet) == 0) {   // 사용자에게 데이터 셋 입력받기
//    system("cls");
//    switch (select_index) {
//    case 0:     // 선택 정렬
//        Selection_sort(&DataSet);
//        break;
//    case 1:     // 버블 정렬
//        Bubble_sort(&DataSet);
//        break;
//    case 2:     // 삽입 정렬
//        Insertion_sort(&DataSet);
//        break;
//    case 3:     // 합병 정렬
//
//        break;
//    case 4:     // 퀵 정렬
//
//        break;
//    case 5:     // 힙 정렬
//
//        break;
//    case 6:     // 쉘 정렬
//
//        break;
//    case 7:     // 기수 정렬
//
//        break;
//    }
//    free(DataSet);
//}