#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�ݹ�

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
int my_strlen(char* str)
{
	//�������ַ�����'\0'����ô����Ϊ
	//my_strlen("Alisu")
	//1 + my_strlen("lisu")
	//...
	//1 + 1 + 1 + 1 + 1 + my_stelen("\0")
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);//������һ���ַ��ĵ�ַ
	}
	else
	{
		return 0;//���� \0 
	}
}

int main()
{
	char str[] = "Alisu";
	//��д���ַ������ȵĺ���������������ʱ����
	int len = my_strlen(str);//���鴫�δ���ȥ������Ԫ�صĵ�ַ
	printf("len = %d\n", len);
	return 0;
}


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