#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//ָ�루���ף�����-----------------------

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6,12
//	return 0;
//}

//ָ���ȥָ��õ���������֮��� Ԫ�� �������������ֽڸ���

//дһ�����������ַ�������

//void string_reverse(char* string)
//{
//	int i = 0;
//	int j = 0;
//	while (string[j] != '\0')
//	{
//		j++;
//	}
//	for (i = 0, j = j - 1; i < j; i++, j--)
//	{
//		char tmp = string[i];
//		string[i] = string[j];
//		string[j] = tmp;
//	}
//}

//�Ľ���
#include<assert.h>

//void string_reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	char arr[] = "Hello World!";
//
//	//scanf %s �����ո�֮���ٶ�ȡ�����Կ�����gets() ��ȡһ�е��ַ���
//
//	string_reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//��Sn = a + aa + aaa + aaaa + aaaaa ����a��һ������
//����a = 2 Sn = 2 + 22 + 222 + 2222 + 22222


//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//����������1-100000֮��������������

//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//1.����i��λ�� - nλ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.����i��ÿһλ��n�η�֮��
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.�Ƚ� i==sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//��ӡn�е����ε� *
//n = 5
//	  *
//   ***
//  *****
// *******
//*********
// *******  1 7
//  *****   2 5
//   ***    3 3
//    *     4 1

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//��ӡ���2����
//	int i = 0;
//	//��ӡ�ϰ벿��
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�  
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ *  1 3 5 7 ...
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < n-1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for ( j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//
//		//��ӡ *   7 5 3 1 
//		for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//�ṹ�����------------------------------------------

//����ˮ���⣺1ƿ��ˮ1Ԫ��2����ƿ���Ի�1ƿ��ˮ����20Ԫ�����Ժȶ�����ˮ��
//ps��ע�⵽ total = 2*money - 1

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//���������ˮ
//	total = money;
//	empty = money;
//	//����������ˮ
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;//����������ˮ����Ŀ�ƿ  + �ϴ�û����Ŀ�ƿ
//	}
//	printf("%d\n", total);
//
//	return 0;
//}



//ʹ�õ��Լ���-------------------------------

//const int*p �� int const*p�ȼ� �����Եģ�

