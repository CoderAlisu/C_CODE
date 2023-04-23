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
	//��ӡ�������к�
	printf("  ");//Ϊ�˶����к�
	for (int i = 1; i <= row; i++)//����i��0��ʼ�������к�
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		//��ӡ�к�
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;//1-9
		if (board[x][y] == '0')
		{
			board[x][y] = '1';//������
			count--;
		}
	}
}


//'1' - '0' = 1  (���Բ�ASCII��)
//'3' - '0' = 3
//'0' = 48
int get_mine_count(char mine[ROWS][COLS],int x, int y)
{
	return mine[x - 1][y] +
	mine[x - 1][y - 1] +
	mine[x][y - 1] +
	mine[x + 1][y - 1] +
	mine[x + 1][y] +
	mine[x + 1][y + 1] +
	mine[x][y + 1] +
	mine[x - 1][y + 1] - 8*'0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//9*9 - 10 = 71
	while (win < row*col - EASY_COUNT)
	{
		printf("���������꣺>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//1.����
			if (mine[x][y] == '1')
			{
				printf("���ź�����ȵ����ˡ�\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//�����ף����㣨x,y����Χ�м�����
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';//���� + ��0�� = �ַ��Ķ�Ӧ���֣����� 1 + ��0�� = ��1��
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("����Ƿ������������롣\n");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("��ϲ�����׳ɹ���\n");
		DisplayBoard(mine, row, col);
	}

}

//չ���Ĺ��ܡ����ݹ�
//1.�����겻����
//2.��������ΧҲû���ף��ݹ鵽1 ��չ��ʱ�����á� �������