#define ROW 3 
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//玩家获胜返回 * ，电脑获胜返回 # ，继续游戏返回 C ，棋盘满返回 Q
char IsWin(char board[ROW][COL], int row, int col);
