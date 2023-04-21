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
//	printf("%d\n", strlen(arr2));//随机值
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		//打印数组中元素的地址
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	//二维数组遍历
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	//二维数组在内存中也是连续存储的
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
//		int flag = 1;//假设本趟冒泡排序已经有序
//		for (int j = 1; j < n - i; j++)
//		{//内层每次完成一趟冒泡排序
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
	printf("%p\n", arr);//首元素地址
	printf("%p\n", arr + 1);

	printf("%p\n", &arr[0]);//首元素地址
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr);//整个数组的起始地址
	printf("%p\n", &arr + 1);

	//数组名是首元素地址，但是有2个例外，剩下的都是首元素地址
	//1.sizeof(数组名)——此时的数组名表示整个数组，sizeof计算的是整个数组的大小，单位是字节

	//2.&数组名—— 数组名代表整个数组，这里取出的是整个数组的地址

	return 0;
}