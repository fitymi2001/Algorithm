#include "sort.h"

void gotoxy(int x, int y) {
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Incomplete() {
    system("cls");
    gotoxy(67, 10);
    printf("미완성입니다.");
    gotoxy(62, 12);
    printf("[  Enter를 눌러 계속 ]");
    gotoxy(0, 0);
    while (1) {
        if (_getch() == 13) {
            break;
        }
    }
    system("cls");
    return;
}