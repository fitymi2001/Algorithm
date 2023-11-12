#include <stdio.h>
#include <windows.h>
#include "sort.h"

int main(void) {
    printf("Sorting Algorithm\n");
    while (1) {
        if (_kbhit()) {
            main_menu();
            system("cls");
            printf("Sorting Algorithm");
        }
    }
    return 0;
}