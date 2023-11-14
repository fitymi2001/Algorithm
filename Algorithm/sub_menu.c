#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include "sort.h"



#define UP 72
#define DOWN 80

void sub_menu_view(int select_index);
int Input_DataSet(int** DataSet);



void sub_menu() {
    unsigned char select_index = 0;    // 현재 선택중인 정렬 (인덱스 번호)
    char key_input;                    // 키보드 입력을 받는 변수
    system("cls");

    sub_menu_view(select_index);

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
                    if (select_index < 7) {
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
                int* DataSet = 0;
                system("cls");
                if (Input_DataSet(&DataSet) == 0) {   // 사용자에게 데이터 셋 입력받기
                    system("cls");
                    switch (select_index) {
                    case 0:     // 선택 정렬
                        selection_sort(&DataSet);
                        break;
                    case 1:     // 버블 정렬
                        bubble_sort(&DataSet);
                        break;
                    case 2:     // 삽입 정렬

                        break;
                    case 3:     // 합병 정렬

                        break;
                    case 4:     // 퀵 정렬

                        break;
                    case 5:     // 힙 정렬

                        break;
                    case 6:     // 쉘 정렬

                        break;
                    case 7:     // 기수 정렬

                        break;
                    }
                    free(DataSet);
                }
                system("cls");
                sub_menu_view(select_index);
            }
        }
    }
    return;
}

void sub_menu_view(int select_index) {
    printf("\n\n                                                         *TIP1* [  방향키를 통해 조작 ]\n");
    printf("                                                         *TIP2* [  Enter를 누르면 다음 화면 ]\n");
    printf("                                                         *TIP3* [  Ctrl + z를 누르면 이전 화면 ]");
    printf("\n\n\n                                                                      선택 정렬\n");
    printf("                                                                      버블 정렬\n");
    printf("                                                                      삽입 정렬\n");
    printf("                                                                      합병 정렬\n");
    printf("                                                                        퀵 정렬\n");
    printf("                                                                        힙 정렬\n");
    printf("                                                                        쉘 정렬\n");
    printf("                                                                      기수 정렬\n");
    gotoxy(67, select_index + 7);
    printf(">>");
    gotoxy(0, 0);
}

int Input_DataSet(int** DataSet) {
    int length = 0;
    printf("\n\n                                                         *TIP1* [  데이터는 띄어쓰기로 구분하여 입력 ]\n");
    printf("                                                         *TIP2* [  Enter를 눌러 확인 ]\n");
    printf("                                                         *TIP3* [  q 입력시 이전 화면 ]\n");
    printf("\n\n\n                                                              데이터의 개수를 입력하시오 : ");
    scanf(" %d", &length);
    if (getchar() == 'q') { return 1; }
    *DataSet = (int*)malloc(sizeof(int)*length);
    printf("                                                            정렬할 데이터셋을 입력하시오 : ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &((*DataSet)[i]));
        if (getchar() == 'q') { return 1; free(*DataSet); }
    }
    return 0;
}