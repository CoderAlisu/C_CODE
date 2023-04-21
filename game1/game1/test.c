#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "game.h"
//三子棋：棋盘为九宫格

void game()
{
	char ret;
	char board[ROW][COL] = {0};
	//希望数组一开始全部是空格——初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
	}

	if (ret == '*')
	{
		printf("玩家获胜！\n");
	}
	else if (ret == '#')
	{
		printf("电脑获胜！\n");
	}
	else
	{
		printf("平局。\n");
	}

}

void menu()
{
	printf("*************************\n");
	printf("***  1 play    0 exit ***\n");
	printf("*************************\n");

}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏。\n");
			break;
		default:
			printf("选择错误，请重新选择。\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}