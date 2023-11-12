#include <stdio.h>
#include <windows.h>
#include "sort.h"

#define UP 72
#define DOWN 80

void sub_menu_view(int select_index);

void sub_menu() {
    unsigned char select_index = 0;    // ���� �������� ���� (�ε��� ��ȣ)
    char key_input;                    // Ű���� �Է��� �޴� ����
    system("cls");

    sub_menu_view(select_index);

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

            if (key_input == 26) {      // ctrl + z �Է�
                system("cls");
                break;
            }

            if (key_input == 13)    // Enter �Է�
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
    printf("    ���� ����\n");
    printf("    ���� ����\n");
    printf("    ���� ����\n");
    printf("    �պ� ����\n");
    printf("    �� ����\n");
    printf("    �� ����\n");
    printf("    �� ����\n");
    printf("    ��� ����\n");
    gotoxy(1, select_index);
    printf(">");
}
