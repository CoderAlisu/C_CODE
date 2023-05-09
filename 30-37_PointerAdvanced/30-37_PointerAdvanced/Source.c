#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//字符指针
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	//以上两句等价
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	//含义：指针p指向 abcdef（常量字符串！） 的首地址、即a的地址
//	*p = 'W';//这种写法是错误的！程序会崩，什么都输出不出来（但是要看编译器）
// //解决：改为const char* p = "abcdef"; const限定*p的内容不能修改
//	printf("%s\n", p);//abcdef
//	return 0;
//}


//经典面试题
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	//char* p1 = "abcdef";
//	//char* p2 = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	if (arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//	//解读：数组名是首元素地址，地址不同，自然arr1 != arr2
//
//	if (p1 == p2)
//	{
//		printf("p1 == p2\n");
//	}
//	else
//	{
//		printf("p1 != p2\n");
//	}
//	//!!!注意 “abcdef”是一个常量字符串！（内存中只存一份）常量！所以p1和p2中存储的地址相同， p1 == p2
//
//	return 0;
//}


//指针数组-----------是数组，用来存放指针
//int main()
//{
//	int* parr[4];//存放整型指针的数组
//	char* pch[5];//存放字符指针的数组
//	char** arr[3];//二级字符指针数组
//	return 0;
//}

//基本上指针数组不会这么用 ↓
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//一般的使用场景
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}


//数组指针-----------------是指针

//int main()
//{
//	//int* p = NULL;//整型指针 - 存放整型的地址
//	//char* pc = NULL;//字符指针 - 存放字符的地址	
//	
//	//数组指针 - 存放数组的地址
//	
//	//int arr[10] = { 0 };
//	//arr - 首元素地址
//	//&arr[0] - 首元素地址
//	//&arr - 数组的地址！！
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int (*p)[10] = &arr;//数组指针、但是因为[]优先级大于* ，所以要加();
//	//数组的类型是 int [10]
//
//	//int* p1[10]={NULL};//p1先和[]结合，所以是指针数组
//
//	return 0;
//}


//int main()
//{
//	//小测试
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	//char* : pa指向的数组元素的类型
//	//括号里面的* : pa是一个指针
//	//pa ：指针变量的名字
//	//[5]: pa指向的数组是5个元素的
//
//	int arr2[4] = { 0 };
//	int (*pa2)[4] = &arr2;
//
//	//一般很少这样使用数组指针！
//	return 0;
//}


//int main()
//{
//	//如果用上面的写法将会很别扭，看下面这段：
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int(*pa)[10] = &arr; //pa == &arr
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);//*pa == arr
//	}
//	printf("\n");
//	//其实完全可以这么写：
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//参数是数组的形式：
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//一般数组指针都是用在二维数组的
//参数是指针的形式
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			//printf("%d ", (*(p + i))[j]);//等价写法
//			//printf("%d ", *(p[i] + j));//等价写法
//			printf("%d ", p[i][j]);//等价写法
//
//			//内层 p+i 找到第i行，解引用拿到首元素地址；外层 +j 找到第j列，解引用拿到对应数组元素
//		}
//		printf("\n");
//	}
//}


//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);//arr - 首元素地址 - 此时要把arr看作是3个元素的一维数组 - 首元素地址就是 第一行的地址(类型为int [5])
//	print2(arr, 3, 5);
//
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = arr;//p == arr
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//	printf("%d ", *(arr + i));//p==arr
//	//	printf("%d ", arr[i]);//arr[i] = *(arr + i) == *( p + i ) == p[i]
//	//	printf("%d ", p[i]);
//	//}
//
//
//	return 0;
//}

int main()
{
	int arr[5];//arr是一个数组  创建一个5个元素的int型数组
	int* parr1[10];//parr1 是数组，创建一个10个元素的int*的指针数组
	int(*parr2)[10];//parr2是指针，创建指向int[10]的数组 指针
	int(*parr3[10])[5];/*parr3是数组，该数组有10个元素，每个元素是一个数组指针、
	该数组指针指向的数组有5个元素，每个元素都是int */
	
	return 0;
}