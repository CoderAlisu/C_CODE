#define ROW 9
#define COL 9
//��������Ϊ����ԭ����9*9��Ϊ11*11����������Ҫ�ж�9*9�ı߽��Ƿ����
#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char mine[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);




