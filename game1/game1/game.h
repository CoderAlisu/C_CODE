#define ROW 3
#define COL 3

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//声明
void InitBoard(char board[ROW][COL],int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);


//能够告诉我们4种状态：玩家赢（'*'）、电脑赢('#')、平局('Q')、继续游戏('C')
char IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);

