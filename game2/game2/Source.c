#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

void game()
{
	//printf("ɨ��\n");
	//1. ���ú��׵���Ϣ
	char mine[ROWS][COLS] = {0};//11*11
	//2.�Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	//��ʾ����
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//ɨ��
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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������.\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}