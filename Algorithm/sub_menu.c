#define _CRT_SECURE_NO_WARNINGS
#include "sort.h"

void sub_menu_view(int select_index);
int Input_DataSet(int** DataSet);


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

            if (key_input == 26) {      // ctrl + z �Է�
                system("cls");
                break;
            }

            if (key_input == 13)    // Enter �Է�
            {
                SORT_MANAGER(select_index);
                system("cls");
                sub_menu_view(select_index);
            }
        }
    }
    return;
}

void sub_menu_view(int select_index) {
    printf("\n\n                                                         *TIP1* [  ����Ű�� ���� ���� ]\n");
    printf("                                                         *TIP2* [  Enter�� ������ ���� ȭ�� ]\n");
    printf("                                                         *TIP3* [  Ctrl + z�� ������ ���� ȭ�� ]");
    printf("\n\n\n                                                                      ���� ����\n");
    printf("                                                                      ���� ����\n");
    printf("                                                                      ���� ����\n");
    printf("                                                                      �պ� ����\n");
    printf("                                                                        �� ����\n");
    printf("                                                                        �� ����\n");
    printf("                                                                        �� ����\n");
    printf("                                                                      ��� ����\n");
    gotoxy(67, select_index + 7);
    printf(">>");
    gotoxy(0, 0);
}

int Select_controller(int max, int former_index) 
{
    int select_index = former_index;    // ���� �������� ���� (�ε��� ��ȣ)
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
                        gotoxy(67, select_index + max);
                        printf("  ");
                        select_index--;
                    }
                    break;
                case DOWN:
                    if (select_index < max) {
                        gotoxy(67, select_index + max);
                        printf("  ");
                        select_index++;
                    }
                    break;
                }
                gotoxy(67, select_index + max);
                printf(">>");
                gotoxy(0, 0);
            }

            if (key_input == 26) {      // ctrl + z �Է�
                system("cls");
                break;
            }

            if (key_input == 13)    // Enter �Է�
            {
                return select_index;
            }
        }
    }
    return 1;
}