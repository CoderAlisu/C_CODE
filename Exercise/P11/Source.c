#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�ݹ�
/*�����о�������1.��ŵ������ 2.������̨������*/
//1.��ŵ������
//
//void hanoi(int n,char a,char b,char c)
//{
//	if (n == 1)
//	{
//		printf("����%c �ƶ��� ��%c\n", a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);
//		printf("����%c �ƶ��� ��%c\n", a, c);
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
//	printf("������Բ�̸���:");
//	scanf("%d", &n);
//	hanoi(n, a, b, c);
//
//	return 0;
//}

////2.������̨������
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
//	//ѭ����ʽʵ����쳲�������
//	int a = 1;
//	int b = 1;
//	int c = 1;//��֤n==1��n==2ʱ���ص�ֵΪ1
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
//	//��쳲���������
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
//	//�ݹ��������
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
//	//��n�Ľ׳�
//	int n = 5;
//	int ret1 = Fac1(n);//ѭ����ʽ
//	int ret2 = Fac2(n);//�ݹ鷽ʽ
//	printf("ret1 = %d, ret2 = %d\n", ret1, ret2);
//	return 0;
//}


//ѭ������
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

//�ݹ�ķ���
//int my_strlen(char* str)
//{
//	//�������ַ�����'\0'����ô����Ϊ
//	//my_strlen("Alisu")
//	//1 + my_strlen("lisu")
//	//...
//	//1 + 1 + 1 + 1 + 1 + my_stelen("\0")
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);//������һ���ַ��ĵ�ַ
//	}
//	else
//	{
//		return 0;//���� \0 
//	}
//}
//
//int main()
//{
//	char str[] = "Alisu";
//	//��д���ַ������ȵĺ���������������ʱ����
//	int len = my_strlen(str);//���鴫�δ���ȥ������Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	return 0;
//}


//void print(int n)
//{
//	if (n > 9)//n���� 1 λ��
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);//��ӡn�����һλ
//
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234 ->Ҫ���ӡ1 2 3 4ÿһλ
//	
//	print(num);
//	//print������
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