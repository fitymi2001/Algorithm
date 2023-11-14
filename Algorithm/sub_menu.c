#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include "sort.h"



#define UP 72
#define DOWN 80

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
                int* DataSet = 0;
                system("cls");
                if (Input_DataSet(&DataSet) == 0) {   // ����ڿ��� ������ �� �Է¹ޱ�
                    system("cls");
                    switch (select_index) {
                    case 0:     // ���� ����
                        selection_sort(&DataSet);
                        break;
                    case 1:     // ���� ����
                        bubble_sort(&DataSet);
                        break;
                    case 2:     // ���� ����

                        break;
                    case 3:     // �պ� ����

                        break;
                    case 4:     // �� ����

                        break;
                    case 5:     // �� ����

                        break;
                    case 6:     // �� ����

                        break;
                    case 7:     // ��� ����

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

int Input_DataSet(int** DataSet) {
    int length = 0;
    printf("\n\n                                                         *TIP1* [  �����ʹ� ����� �����Ͽ� �Է� ]\n");
    printf("                                                         *TIP2* [  Enter�� ���� Ȯ�� ]\n");
    printf("                                                         *TIP3* [  q �Է½� ���� ȭ�� ]\n");
    printf("\n\n\n                                                              �������� ������ �Է��Ͻÿ� : ");
    scanf(" %d", &length);
    if (getchar() == 'q') { return 1; }
    *DataSet = (int*)malloc(sizeof(int)*length);
    printf("                                                            ������ �����ͼ��� �Է��Ͻÿ� : ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &((*DataSet)[i]));
        if (getchar() == 'q') { return 1; free(*DataSet); }
    }
    return 0;
}