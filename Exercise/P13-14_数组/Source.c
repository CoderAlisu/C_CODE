#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//���ֵ
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		//��ӡ������Ԫ�صĵ�ַ
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	//��ά�������
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	//��ά�������ڴ���Ҳ�������洢��
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d] = %p\n",i,j ,&arr[i][j]);
//		}
//	}
//	return 0;
//}

//void swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//void bubble_sort(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		int flag = 1;//���豾��ð�������Ѿ�����
//		for (int j = 1; j < n - i; j++)
//		{//�ڲ�ÿ�����һ��ð������
//			if (arr[j - 1] > arr[j])
//			{
//				swap(&arr[j - 1], &arr[j]);
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,5,8,7,9,6,3,0,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	printf("%p\n", arr);//��Ԫ�ص�ַ
	printf("%p\n", arr + 1);

	printf("%p\n", &arr[0]);//��Ԫ�ص�ַ
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr);//�����������ʼ��ַ
	printf("%p\n", &arr + 1);

	//����������Ԫ�ص�ַ��������2�����⣬ʣ�µĶ�����Ԫ�ص�ַ
	//1.sizeof(������)������ʱ����������ʾ�������飬sizeof���������������Ĵ�С����λ���ֽ�

	//2.&���������� �����������������飬����ȡ��������������ĵ�ַ

	return 0;
}