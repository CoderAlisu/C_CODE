#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

	printf("\n");//和下一次显示隔开一行
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;

		if (mine[x][y] != '1')
		{
			mine[x][y] = '1';
			count--;
		}
	}

}

int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8*'0';//'1' - '0' = 1
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x;
	int y;
	int count = 0;//排雷个数
	while (1)
	{
		printf("please input the coordinate:");
		scanf("%d%d", &x, &y);//忘记考虑坐标的合法性了！
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("bomm!!!\n lose!\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				//计算周围雷的个数
				int num = get_mine_count(mine, x, y);
				show[x][y] = num + '0';
				DisplayBoard(show, ROW, COL);
				count++;
				if (count >= row * col - EASY_COUNT)
				{
					break;
				}
			}
		}
		else
		{
			printf("the coordinate is invalid, please input again!\n");
		}
		
	}
	if (count == row * col - EASY_COUNT)
	{
		printf("player win!\n");
		DisplayBoard(mine, ROW, COL);
	}
}
