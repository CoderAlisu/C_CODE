#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

void game()
{
	//printf("扫雷\n");
	//1. 布置好雷的信息
	char mine[ROWS][COLS] = {0};//11*11
	//2.排查出雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	//显示棋盘
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//扫雷
	FindMine(mine, show, ROW, COL);
}

void menu()
{
	printf("***************************\n");
	printf("**** 1 play     0 exit*****\n");
	printf("***************************\n");
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入.\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}