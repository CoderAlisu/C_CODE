#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		//只能控制行数打印的数据，不能控制列数
//		//1.打印一行的数据
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);//粗糙版打印
//		//2.打印分割行
//		if (i < row - 1)
//		{
//			printf("---|---|---\n");//粗糙版打印
//		}
//
//	}
//}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			//1.打印数据
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");

		//2.打印分割行
		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)
			{	
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");

	while (1) 
	{
		printf("请输入坐标:");
		scanf("%d%d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			//如果是下过的位置，不能再下棋子
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用，请重新输入.\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入。\n");
		}
	}
	
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	//电脑随机走一个位置
	srand((unsigned int)time(NULL));
	int x = 0;
	int y = 0;
	printf("电脑走：>\n");
	while (1)
	{
		x = rand() % row;//控制随机值范围
		y = rand() % col;//控制随机值范围
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}


//返回1表示棋盘满了，0表示棋盘没满
int IsFull(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	//比较一般的写法——适用于三行三列的棋盘
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}

	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//判断是否平局
	if (1 == IsFull(board,ROW,COL))
	{
		return 'Q';
	}
	else
	{
		return 'C';
	}

}




//char IsWin(char board[ROW][COL], int row, int col)
//{
//	//尝试升级版
//	
//}