#include <stdio.h>
#include <windows.h>
#include "sort.h"
#pragma warning(disable:4996)

void logo_print();

int main(void) {
    system("mode con:cols=155 lines=30");
    logo_print();
    while (1) {
        if (_kbhit()) {
            _getch();
            main_menu();
            system("cls");
            logo_print();
        }
    }
    return 0;
}
     
void logo_print() {
    printf("\n\n\n     .d8888b.                   888    d8b                               d8888 888                           d8b 888    888\n    d88P  Y88b                  888    Y8P                              d88888 888                           Y8P 888    888\n    Y88b.                       888                                    d88P888 888                               888    888\n     \"Y888b.    .d88b.  888d888 888888 888 88888b.   .d88b.           d88P 888 888  .d88b.   .d88b.  888d888 888 888888 88888b.  88888b.d88b.  .d8888b  \n        \"Y88b. d88\"\"88b 888P\"   888    888 888 \"88b d88P\"88b         d88P  888 888 d88P\"88b d88\"\"88b 888P\"   888 888    888 \"88b 888 \"888 \"88b 88K      \n          \"888 888  888 888     888    888 888  888 888  888        d88P   888 888 888  888 888  888 888     888 888    888  888 888  888  888 \"Y8888b. \n    Y88b  d88P Y88..88P 888     Y88b.  888 888  888 Y88b 888       d8888888888 888 Y88b 888 Y88..88P 888     888 Y88b.  888  888 888  888  888      X88 \n     \"Y8888P\"   \"Y88P\"  888      \"Y888 888 888  888  \"Y88888      d88P     888 888  \"Y88888  \"Y88P\"  888     888  \"Y888 888  888 888  888  888  88888P\' \n                                                         888                            888                                                             \n                                                    Y8b d88P                       Y8b d88P                                                             \n                                                     \"Y88P\"                         \"Y88P\"\n");                                                              
    printf("\n\n\n                                                                                                                                                                                                                            아무키나 입력하세요!");
}