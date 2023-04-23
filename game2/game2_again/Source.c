#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void menu()
{
	printf("----------------------\n");
	printf("-----   1 play  ------\n");
	printf("-----   0 exit  ------\n");
	printf("----------------------\n");
}

void game()
{
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = { 0 };

	InitBoard(mine, ROWS, COLS, '0');
	//DisplayBoard(mine, ROW, COL);
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	//1. ²¼ÖÃÀ×
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//2. ÅÅ³ýÀ×
	FindMine(mine, show, ROW, COL);

}

int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		printf("please choose one£º");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("play game.\n");
			game();
			break;
		case 0:
			printf("exit game.\n");
			break;
		default:
			printf("input error, please input again.\n");
			break;
		}
	} while (input);
	return 0;
}