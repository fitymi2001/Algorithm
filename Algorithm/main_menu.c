#include <stdio.h>
#include <windows.h>
#include "sort.h"

#define UP 72
#define DOWN 80

void main_menu_view(int select_index);

void main_menu() {
    unsigned char select_index = 0;    // 현재 선택중인 정렬 (인덱스 번호)
    char key_input;                            // 키보드 입력을 받는 변수
    system("cls");

    main_menu_view(select_index);

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
                sub_menu();
                main_menu_view(select_index);
            }
        }
    }
    return;
}
          
void main_menu_view(int select_index) {
    printf("\n\n                                                         *TIP1* [  방향키를 통해 조작 ]\n");
    printf("                                                         *TIP2* [  Enter를 누르면 다음 화면 ]\n");
    printf("                                                         *TIP3* [  Ctrl + z를 누르면 이전 화면 ]");
    printf("\n\n\n                                                                      정렬\n");
    printf("                                                                      그래프\n\n\n");
    gotoxy(67, select_index+7);
    printf(">>");
    gotoxy(0,0);
}