#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "game.h"
//�����壺����Ϊ�Ź���

void game()
{
	char ret;
	char board[ROW][COL] = {0};
	//ϣ������һ��ʼȫ���ǿո񡪡���ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
	}

	if (ret == '*')
	{
		printf("��һ�ʤ��\n");
	}
	else if (ret == '#')
	{
		printf("���Ի�ʤ��\n");
	}
	else
	{
		printf("ƽ�֡�\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}