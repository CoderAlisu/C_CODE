#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
//自己写一遍三子棋的实现

void game()
{
	char ret;
	char board[ROW][COL];
	//初始化
	InitBoard(board,ROW,COL);
	//显示棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == 'Q')
	{
		printf("DRAW.\n");
	}
	else if (ret == '*')
	{
		printf("Player win!\n");
	}
	else
	{
		printf("Computer win!\n");
	}
	
}


void menu()
{
	printf("-----------------------\n");
	printf("----1 play   0 exit----\n");
	printf("-----------------------\n");
}

int main()
{
	int input;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("game start\n");
			game();
			break;
		case 0:
			printf("exit success!\n");
			break;
		default:
			printf("input error,please input again.\n");
			break;
		}
	} while (input);

	return 0;
}
