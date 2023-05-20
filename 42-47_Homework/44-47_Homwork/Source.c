#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	unsigned char a = 200;//128+64+8
//	//00000000 000000000 00000000 11001000 - 200
//	//1100 1000 - a
//	unsigned char b = 100;//64+32 + 4
//	//00000000 000000000 00000000 01100100 - 100
//	//0110 0100 - b
//	unsigned char c = 0;
//
//	c = a + b;//a和b相加会发生整型提升！
//	//00000000 00000000 00000000 11001000 -这里错了，a是无符号数，所以整型提升是补0
//	//00000000 00000000 00000000 01100100
//	//00000000 00000000 00000001 00101100  - 300 （a+b）
//	//00101100 - c(存到c之后会截断 - 44  （c会先整型提升，再打印）
//
//	printf("%d %d", a + b, c);//300 44  
//	//%d 是指最后用有符号十进制形式打印 
//
//	return 0;
//}

//
//int main()
//{
//	unsigned int a = 0x1234;
//	//00 00 12 34 - a
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);//小端 0x34 = 0011 0100 = 32+16+4 = 52
//	return 0;
//}

#include<string.h>
//
//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for ( i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//a：-1 -2 -3 ... -128 1 2 ... 127 0
//	
//	//(补码)
//	//1111 1111   -  -1
//	// ...
//	//1000 0001 -  -127
//	//1000 0000 -  -128 + （-1）用-128和第一行的-1相加，去掉溢出的数，得到1
//	//0111 1111  -  127
//	//...
//	//0000 0001  - 1 + （-1）
//	//0000 0000 - 0
//
//	printf("%d\n", strlen(a));//strlen遇到\0会停下来，255
//	return 0;
//}



//打印杨辉三角
//——用二级数组

//int main()
//{
//	int arr[10][10]={0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i > 1 && j > 0)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10-i-1; j++)
//		{
//			printf(" ");
//		}
//		for ( j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


/*猜凶手
题目内容:
日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个
以下为4个嫌疑犯的供词
A说:不是我。
B说:是C。
C说:是D。
D说: C在胡说
已知3个人说了真话，1个人说的是假话*/


//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer < 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}


//赛马问题: 有36匹马，6个跑道，没有计时器，请赛马确定，36匹马中的前三名.
//请问最少比赛几次?  - 8次

//赛马问题: 有25匹马，5个跑道，没有计时器，请赛马确定，25匹马中的前三名.
//请问最少比赛几次?  - 7次

//烧香问题
//有一个种香，材质不均匀,但是每一根这样的香，燃烧完恰好是1个小时
//给你2根香，帮我确定一个15分钟的时间段
//答：第一根香两端都点着（燃烧完的时间为半个小时），同时点燃第二根香的其中一端
//当第一根香燃烧完时（此时第二根香已经燃烧了半个小时），点燃第二根香的另一端
//那么第二根香燃烧完的时间就是15min


//题目名称:
//猜名次
//题目内容 :
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说 :B第二，我第三;
//B选手说:我第二，E第四;
//C选手说:我第一，D第二;
//D选手说:C最后，我第三;
//E选手说:我第四，A第一;
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	//穷举法
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)//保证每个名次只出现一次，1*2*3*4*5 = 120
//								printf("a = %d,b = %d,c = %d,d = %d,e = %d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//字符指针---------------------------------------

//free

//#include<stdlib.h>
//int main()
//{
//	//申请空间
//	int* p = (int*)malloc(10 * sizeof(int));//malloc默认返回void*类型的指针
//	//使用空间
//	//释放空间
//	free(p);//free不会改变p的值！！
//	p = NULL;//需要自己将指针置为NULL
//	return 0;
//}


//题目名称:
//定义一个函数指针，
//指向的函数有两个int形参并且 【返回一个函数指针】，
//返回的指针指向一个有一个int形参且返回int的函数 ? 
// 下面哪个是正确的 ? (A)
//题目内容 :
//	A.int (*  (*F)(int, int)   )(int)
//	B.int (*F)(int, int)  函数指针，但返回的是int型
//	C.int (*(*F)(int, int))  函数指针，返回的是int*型
//	D.*(*F)(int, int)(int) 

//int* fun(int a, int b)
//{
//	printf("hello");
//	return NULL;
//}
//
//int main()
//{
//	int(*(*F)(int, int));
//	F = fun;
//	F(1, 2);
//	return 0;
//}


//回调函数------------------------------
//回调函数是调用函数指针指向的那个函数

//下面test函数设计正确的是:（ B D）
// char* arr(5] = {"hello", "bit"};
//test(arr);
//题目内容:
//	A.void test(char* arr);
//	Bvoid test(char** arr): //arr首元素地址，每个元素的类型都是char*，所以要用char**类型的指针来接收
//	C.void test(char arr[5]);
//	D.void test(char* arr[5])

//注：二级数组arr[3][5]的数组名arr指的是第一行数组的地址

//int main()
//{
//	int a[5] = { 5,4,3,2,1 };
//	int* ptr = (int*)(&a + 1);//&a：整个数组的地址
//	printf("%d,%d", *(a + 1), *(ptr - 1));//4，1
//	return 0;
//}



//指针的进阶----------------------------------

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);//&aa 整个二维数组的地址
//	int* ptr2 = (int*)(*(aa + 1));//aa第一行数组的地址
//	//aa+1 拿到第二行的数组地址
//	//解引用：拿到第二行的数组名  *（aa+1） == aa[1]
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));//1，6
//	return 0;
//}


//题目内容:
//实现一个函数，可以左旋字符串中的k个字符.
//例如:
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

#include<assert.h>

//void left_reverse(char* arr, int k)
//{
//	//暴力求解法
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	while (i < k)
//	{
//		int j = 0;
//		char tmp = arr[0];
//		for (j = 1; j < len; j++)
//		{
//			arr[j - 1] = arr[j];
//		}
//		arr[len - 1] = tmp;
//		i++;
//	}
//}

//void reverse(char arr[], int start, int end)
//{
//	//assert(arr);
//	while (start < end)
//	{
//		char tmp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = tmp;
//		start++;
//		end--;
//	}
//}
//
//void left_reverse(char* arr, int k)
//{
//	int len = strlen(arr);
//	//3步旋转法：
//	reverse(arr,0,k-1);
//	reverse(arr, k, len - 1);
//	reverse(arr, 0, len - 1);
//}
//
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	char arr[] = "abcdef";
//	left_reverse(arr, k);
//	printf("%s\n", arr);
//}

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例 : 给定s1 = AABCD 和 s2 = BCDAA，返回1.
//给定s1 = abcd和 s2 = ACBD，返回0.

//要用到上一题的left_move / left_reverse函数

//int is_left_move(char* s1, char* s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//		return 0;
//	int i = 0;
//	//穷举法
//	for (i = 0; i < len1; i++)
//	{
//		left_reverse(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}


//另一种方法
//abcdefabcdef  ：这样这个包含了所有的情况（6种）
//判断s2是不是s1的子字符串就行了

//int is_left_move(char* s1, char* s2)
//{
//	//自己给自己追加一个字符串，不能用strcat：会把\0覆盖掉，导致找不到结束位置
//	//解决：使用strncat，多了一个参数count（追加的字符个数）
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)//如果s2是s1的字串，那么s2肯定不是由s1旋转得到的，所以加一个条件进行判断
//		return 0;
//	strncat(s1, s1, len1);
//	//strstr--找字串的函数、找得到返回主串中首次出现字串的地址，否则返回NULL
//	char* ret = strstr(s1, s2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//
//int main()
//{
//	char s1[30] = "abcdef";
//	char s2[] = "cdefa";
//	int ret = is_left_move(s1, s2);
//	if (ret == 1)
//	{
//		printf("yes.\n");
//	}
//	else 
//	{
//		printf("no.\n");
//	}
//
//	return 0;
//}



//题目名称:
//杨氏矩阵——出自剑指offer
//题目内容:
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在
//要求: 时间复杂度小于O(N);


//研究右上角元素和要查找元素的大小，每次可以去掉一行或者一列的数

//int find_num(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;//没找到
//}

int find_num(int arr[3][3], int k, int* px, int* py)
{
	//通过传地址，把x，y的坐标进行修改
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if (arr[x][y] > k)
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;//没找到
}

int main()
{
	int k = 1;//要查找的元素
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int x = 3;
	int y = 3;

	//返回型参数
	int ret = find_num(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("Find!\n");
		printf("下标是：%d,%d", x, y);
	}
	else
	{
		printf("Cannot find.\n");
	}
	return 0;
}