#include <stdio.h>
#include <windows.h>
#include "sort.h"

#define UP 72
#define DOWN 80

void sub_menu_view(int select_index);

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
                        gotoxy(1, select_index);
                        printf(" ");
                        select_index--;
                    }
                    break;
                case DOWN:
                    if (select_index < 7) {
                        gotoxy(1, select_index);
                        printf(" ");
                        select_index++; 
                    }
                    break;
                }
                gotoxy(1, select_index);
                printf(">");
            }

            if (key_input == 26) {      // ctrl + z 입력
                system("cls");
                break;
            }

            if (key_input == 13)    // Enter 입력
            {
                switch (select_index) {
                case 0:

                    break;
                case 1:

                    break;
                case 2:

                    break;
                case 3:

                    break;
                case 4:

                    break;
                case 5:

                    break;
                case 6:

                    break;
                case 7:

                    break;
                }
            }
        }
    }
    return;
}

void sub_menu_view(int select_index) {
    printf("    버블 정렬\n");
    printf("    선택 정렬\n");
    printf("    삽입 정렬\n");
    printf("    합병 정렬\n");
    printf("    퀵 정렬\n");
    printf("    힙 정렬\n");
    printf("    쉘 정렬\n");
    printf("    기수 정렬\n");
    gotoxy(1, select_index);
    printf(">");
}
