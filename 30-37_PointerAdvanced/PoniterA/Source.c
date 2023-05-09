#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//回顾上节课：字符指针、指针数组、数组指针----------
//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* pc = "abcdef";//abcdef是一个常量字符串！
//
//	//指针数组 - 数组 -存放指针的数组
//	char* arr1[5];//存放5个 char* 的指针
//	int* arr2[5];
//
//	//数组指针
//	//int* p;//整型指针
//	int arr[5];//&arr 是整个数组的地址
//	int(*p)[5] = &arr; //p 指向int型的 有5个元素的 数组
//	//其中 int (*)[5] 是p的类型 - 即数组指针类型
//	int (*parr3[10])[5];//其中去掉parr3[10]之后，int (*)[5] 是数组的元素类型
//	return 0;
//}


//数组参数 、 指针参数 --------------

//一维数组传参（以下几种传参形式都是可以的）
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int *arr)
//{}
//void test(int *arr[20])//这里的20也可以省略
//{}
//void test(int **arr)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test(arr2);
//	return 0;
//}

//二维数组传参--------

//void test(int arr[3][4])
//{}
//void test1(int arr[][4])
//{}
//void test2(int arr[3][])//err
//{}

//void test3(int *arr)//err
//{}

//void test4(int **arr)//err
//{}

//void test5(int (*arr)[4])
//{}
//
//int main()
//{
//	int arr[3][4] = { 0 };//二维数组的 数组名arr 是一个一维数组
//	/*test(arr);
//	test3(arr);*/
//	//test4(arr);//二级指针是存放一级指针的
//	test5(arr);
//
//	return 0;
//}

//void test(int* p)//参数为一级指针可以接收：①变量地址 ②一级指针
//{
//}
//
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test(&a);
//	test(p1);
//
//	return 0;
//}

//--------------------

//void test(int** p)
//{}
//
//int main()
//{
//	//二级指针传参
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);//①一级指针地址
//	test(pp);//②二级指针
//	
//	int* arr[5];
//	test(arr);//③指针数组（存放一级指针数组的数组名）
//
//	return 0;
//}


//函数指针------------指向函数的指针，存放函数地址的一个指针

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//
//	//&函数名 == 函数名，都表示函数的地址 ，和数组是不一样的
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//
//	//数组指针 vs 函数指针
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;
//
//	int (*pAdd)(int x, int y) = Add;//pAdd要先和*结合，表示它是指针
//	int (*pa)(int, int) = Add;
//
//	//调用
//	printf("%d\n", (*pa)(2, 3));//5
//
//
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	//注意一个点：
//	//int(*p)[10];//其中 int(*)[10] 是类型
//
//	//同样地：
//	void(*p)(char*) = Print;//void(*)(char*) 是p的类型
//	(*p)("Alisu");
//	
//	return 0;
//}

//int main()
//{
//	//分析以下二段代码：
//
//	(*(void(*)())0)();
//	//（*（函数指针类型）0）（） ——   (类型) + 数 = 对这个数进行强制类型转换
//	// 把0强制类型转换成：void(*)()函数指针类型，所以0就是一个函数的地址
//	//调用0地址处的该函数 
//
//
//	void(*signal(int, void(*)(int)))(int);
//	// signal(整型，函数指针类型)
//	//void (* 函数)(int) - 这个函数的返回值类型是 void(*)(int) ，即函数指针类型
//	//出自《C陷阱与缺陷》
//	
//	return 0;
//}

//这是一个signal函数声明，
//signal函数有2个参数，一个是int型，一个是函数指针类型，该指针指向的函数有一个int型参数，返回值是void
//signal函数的返回值是函数指针，该指针指向的函数有一个int型参数，返回值是void

//void(*signal(int, void(*)(int)))(int); //如何写得更简洁:
//
//typedef void(*pfun_t)(int);//pfun_t是别名
//pfun_t singal(int, pfun_t);

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (&Add)(2, 3));
//	printf("%d\n", (Add)(2, 3));
//
//	printf("%d\n", (*pa)(2, 3));
//
//	//printf("%d\n", (**pa)(2, 3));
//	//printf("%d\n", (***pa)(2, 3));
//	//以上4个结果相同，说明pa前面的 * 是不起作用的——可以解引用、也可以不解引用
//	return 0;
//}


//函数指针数组---------------

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//	//需要一个数组
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src);
////写一个函数指针pf，能够指向my_strcpy
////写一个函数指针数组，能够存放4个 my_strcpy函数的地址
//
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//
//	char* (*pfArr[4])(char*, const char*);
//
//	return 0;
//}

//实现一个计算器

void menu()
{
	printf("---------------------\n");
	printf("---1. add   2. sub---\n");
	printf("---3. mul   4. div---\n");
	printf("-------0. exit-------\n");
	printf("---------------------\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	//pArr是一个函数指针数组 称为转移表-----------------函数指针的应用
	int(*pArr[])(int, int) = { 0,Add,Sub,Mul,Div };
	//好处，简洁、可以随时增加计算器的函数，例如加个xor
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数:");
			scanf("%d%d", &x, &y);
			int ret = pArr[input](x, y);
			printf("%d\n", ret);
		}
		else if(input ==0)
		{
			printf("退出\n");
			break;
		}
		else
		{
			printf("输入错误\n");
		}
	} while (input);
	return 0;
}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		//逻辑正确了，但是代码冗余
//		switch (input)
//		{
//		case 1:
//			printf("请输入2个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入2个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入2个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入2个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//指向函数数组的指针-----------------

