#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//递归

//循环方法
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//递归的方法
int my_strlen(char* str)
{
	//如果这个字符不是'\0'，那么长度为
	//my_strlen("Alisu")
	//1 + my_strlen("lisu")
	//...
	//1 + 1 + 1 + 1 + 1 + my_stelen("\0")
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);//传入下一个字符的地址
	}
	else
	{
		return 0;//遇到 \0 
	}
}

int main()
{
	char str[] = "Alisu";
	//编写求字符串长度的函数，不允许用临时变量
	int len = my_strlen(str);//数组传参传过去的是首元素的地址
	printf("len = %d\n", len);
	return 0;
}


//void print(int n)
//{
//	if (n > 9)//n大于 1 位数
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);//打印n的最后一位
//
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234 ->要求打印1 2 3 4每一位
//	
//	print(num);
//	//print函数：
//	// print(123)  4
//	// print(12) 3 4
//	//print(1) 2 3 4
//}



//#include "Add.h"

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}