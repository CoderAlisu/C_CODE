#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


int main()
{
	//函数的链式访问
	printf("%d", printf("%d", printf("%d", 43)));
	//printf的返回值是打印的字符的个数！

	return 0;
}


//void num_plus(int* num)
//{
//	(*num)++;//++的优先级大于 *
//}
//
//int main()
//{
//	int num = 0;
//	//每次调用这个函数 num+1
//	num_plus(&num);
//	printf("num = %d\n", num);
//	num_plus(&num);
//	printf("num = %d\n", num);
//	num_plus(&num);
//	printf("num = %d\n", num);
//	return 0;
//}


//int binary_search(int* arr,int x, int length)
//{
//	//左闭右闭
//	//数组传参的时候传的是首地址，所以不能用sizeof(arr)/sizeof(arr[0])求数组大小
//	int left = 0;
//	int right = length - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else 
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//写一个函数实现整型有序数组的二分查找
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int x;
//	int ret;
//	printf("请输入要查找的值:");
//	scanf("%d", &x);
//	ret = binary_search(arr, x, 10);
//	if (ret == -1)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//}



//int is_leap_year(int n)
//{
//	if ((n % 400 == 0) || (n % 100 != 0 && n % 4 == 0))
//	{
//		return 1;
//	}
//	else 
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	//写一个函数，判断一年是不是闰年
//	int year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int is_prime(int i)
//{
//	//素数返回1，不是返回0
//	int j = 0;
//	for (j = 2; j < i / 2; j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	//写一个函数，判断一个数是否为素数
//	int i = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////不能写作值传递（传址调用），因为此时形参实例化之后是实参的一份拷贝
////写一个函数，交换2个整型变量的值
//void Swap(int* px, int* py)//传址调用
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//int main()
//{
//	int x = 100;
//	int y = 200;
//	printf("x = %d,y = %d\n", x, y);
//	Swap(&x, &y);
//	printf("x = %d,y = %d\n", x, y);
//	return 0;
//}



//写一个函数，求2个整数中的较大值
//int get_max(int a,int b)
//{
//	/*if (a < b)
//	{
//		return b;
//	}
//	else
//	{
//		return a;
//	}*/
//	return (a > b) ? a : b;
//}
//int main()
//{
//	int x = 100;
//	int y = 200;
//	int max = get_max(x, y);
//	printf("max = %d\n", max);
//	return 0;
//}


//memset
//int main()
//{
//	//把Hello改成*****号
//	char arr[] = "Hello World";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "Alisu";
//	char arr2[20];
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);//Alisu
//	return 0;
//}
