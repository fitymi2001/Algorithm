#include "sort.h"

void gotoxy(int x, int y) {
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Incomplete() {
    system("cls");
    gotoxy(67, 10);
    printf("�̿ϼ��Դϴ�.");
    gotoxy(62, 12);
    printf("[  Enter�� ���� ��� ]");
    gotoxy(0, 0);
    while (1) {
        if (_getch() == 13) {
            break;
        }
    }
    system("cls");
    return;
}