#pragma once
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <conio.h>
  //  정렬 함수
void SORT_MANAGER();
int Selection_sort();
int Bubble_sort();
int Insertion_sort();
int Merge_sort();
int Heap_sort();
int Quick_sort();
int Shell_sort();
int Radix_sort();
  //
void main_menu();
void sub_menu();
  //  서브 함수
void gotoxy();
void Incomplete();
  //
#define UP 72
#define DOWN 80