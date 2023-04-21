#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//递归
/*自主研究案例：1.汉诺塔问题 2.青蛙跳台阶问题*/
//1.汉诺塔问题
//
//void hanoi(int n,char a,char b,char c)
//{
//	if (n == 1)
//	{
//		printf("从塔%c 移动到 塔%c\n", a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);
//		printf("从塔%c 移动到 塔%c\n", a, c);
//		hanoi(n - 1, b, a, c);
//	}
//}
//
//int main()
//{
//	int n;
//	char a = '1';
//	char b = '2';
//	char c = '3';
//	printf("请输入圆盘个数:");
//	scanf("%d", &n);
//	hanoi(n, a, b, c);
//
//	return 0;
//}

////2.青蛙跳台阶问题
//int jump2(int n)
//{
//	int a = 1;
//	int b = 2;
//	int c;
//	while (n > 2) 
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	if (1 == n)
//	{
//		return a;
//	}
//	else if (2 == n)
//	{
//		return b;
//	}
//	else 
//	{
//		return c;
//	}
//	
//}
//
//int jump(int n)
//{
//	if (1 == n)
//	{
//		return 1;
//	}
//	else if (2 == n)
//	{
//		return 2;
//	}
//	else
//	{
//		return jump(n - 1) + jump(n - 2);
//	}
//}
//int main()
//{
//	// 1 2 3 5 ...
//	int n = 0;
//	int ret1;
//	int ret2;
//	scanf("%d", &n);
//	ret1 = jump(n);
//	ret2 = jump(n);
//	printf("ret1 = %d, ret2 = %d\n", ret1, ret2);
//	return 0;
//}


//int Fib(int n)
//{
//	if (1 == n || 2 == n)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}

//int Fib(int n)
//{
//	//循环方式实现求斐波那契数
//	int a = 1;
//	int b = 1;
//	int c = 1;//保证n==1和n==2时返回的值为1
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	//求斐波那契数列
//	int n = 6;
//	int ret = 0;
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}


//int Fac1(int n)
//{
//	int sum = 1;
//	while (n > 0) 
//	{
//		sum = sum * n;
//		n--;
//		
//	}
//	return sum;
//}
//
//int Fac2(int n)
//{
//	//递归结束条件
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac2(n - 1);
//	}
//}
//
//int main()
//{
//	//求n的阶乘
//	int n = 5;
//	int ret1 = Fac1(n);//循环方式
//	int ret2 = Fac2(n);//递归方式
//	printf("ret1 = %d, ret2 = %d\n", ret1, ret2);
//	return 0;
//}


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
//int my_strlen(char* str)
//{
//	//如果这个字符不是'\0'，那么长度为
//	//my_strlen("Alisu")
//	//1 + my_strlen("lisu")
//	//...
//	//1 + 1 + 1 + 1 + 1 + my_stelen("\0")
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);//传入下一个字符的地址
//	}
//	else
//	{
//		return 0;//遇到 \0 
//	}
//}
//
//int main()
//{
//	char str[] = "Alisu";
//	//编写求字符串长度的函数，不允许用临时变量
//	int len = my_strlen(str);//数组传参传过去的是首元素的地址
//	printf("len = %d\n", len);
//	return 0;
//}


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