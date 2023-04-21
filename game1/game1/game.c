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
//		//ֻ�ܿ���������ӡ�����ݣ����ܿ�������
//		//1.��ӡһ�е�����
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);//�ֲڰ��ӡ
//		//2.��ӡ�ָ���
//		if (i < row - 1)
//		{
//			printf("---|---|---\n");//�ֲڰ��ӡ
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
			//1.��ӡ����
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");

		//2.��ӡ�ָ���
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
	printf("�����:>\n");

	while (1) 
	{
		printf("����������:");
		scanf("%d%d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			//������¹���λ�ã�������������
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ�ã�����������.\n");
			}
		}
		else
		{
			printf("����Ƿ������������롣\n");
		}
	}
	
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	//���������һ��λ��
	srand((unsigned int)time(NULL));
	int x = 0;
	int y = 0;
	printf("�����ߣ�>\n");
	while (1)
	{
		x = rand() % row;//�������ֵ��Χ
		y = rand() % col;//�������ֵ��Χ
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}


//����1��ʾ�������ˣ�0��ʾ����û��
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
	//�Ƚ�һ���д�������������������е�����
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
	//�����Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//�ж��Ƿ�ƽ��
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
//	//����������
//	
//}