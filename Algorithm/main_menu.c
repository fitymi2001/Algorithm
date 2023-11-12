#include <stdio.h>
#include <windows.h>
#include "sort.h"

#define UP 72
#define DOWN 80

void main_menu_view(int select_index);

void main_menu() {
    unsigned char select_index = 0;    // ���� �������� ���� (�ε��� ��ȣ)
    char key_input;                            // Ű���� �Է��� �޴� ����
    system("cls");

    main_menu_view(select_index);

    while (1) {
        if (_kbhit()) {        
            key_input = _getch();     
            if (key_input == -32) {     // ��,�Ʒ� �Է�
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
                    if (select_index < 1) {
                        gotoxy(1, select_index);
                        printf(" ");
                        select_index++;
                    }
                    break;
                }
                gotoxy(1, select_index);
                printf(">");
            }

            if (key_input == 26) {      // ctrl + z �Է�
                system("cls");
                break;
            }

            if (key_input == 13)    // Enter �Է�
            {
                sub_menu();
                main_menu_view(select_index);
            }
        }
    }
    return;
}

void main_menu_view(int select_index) {
    printf("    ����\n");
    printf("    �׷���\n");
    gotoxy(1, select_index);
    printf(">");
}