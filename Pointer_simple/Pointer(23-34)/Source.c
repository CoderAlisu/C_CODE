#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	
//	int a = 0x11223344;
//	//两个指针的类型不一样，但存的地址一样
//	//int* p1 = &a;
//	//*p1 = 0; //a变为00 00 00 00
//
//	char* p2 = &a;
//	*p2 = 0;//a变为 00 33 22 11
//
//	/*指针类型决定了指针进行解引用的时候，能够访问的空间的大小
//	int* p: *p能够访问4个字节
//	char* p: *p能够访问1个字节 */
//	//printf("%p\n", p1);
//	//printf("%p\n", p2);
//
//	return 0;
//}

//int main()
//{
//	//指针加减整数
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);//F211DCF564
//	printf("%p\n", pa+1);//F211DCF568 （增加4个字节）
//	printf("%p\n", pc);//F211DCF564
//	printf("%p\n", pc+1);//F211DCF565 （增加1个字节）
//
//	/*指针类型决定了指针一步走多远，也就是决定了指针的步长*/
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名-首元素地址
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	//野指针：指针指向的位置是不可知的（随机的，不正确的，没有明确限制的）.可能导致的几种情况：
//	//1.未初始化
//	//int* p;//局部的指针变量
//
//	////2.越界访问
//	//int* arr[10] = { 0 };
//	//int* p = arr;
//	//for (int i = 0; i < 12; i++)//p指向的空间超过arr的空间，即越界
//	//{
//	//	p++;
//	//}
//	return 0;
//}


//3.指针指向的空间被释放
//int* test()
//{
//	int a = 10;//a局部变量，函数结束即销毁，已经不属于当前程序的空间（还给系统了）
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;//这时访问是非法的
//	return 0;
//}

//int main()
//{
//	int* p = NULL;//在不知道初始化成什么的时候，直接NULL
//}

//int main()
//{
//	//指针加减整数
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;
//	}*/
//
//	int* p = &arr[9];
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);//10 8 6 4 2
//		p -= 2;
//	}
//	return 0;
//}

//int main()
//{
//	float values[5] = {1,2,3,4,5};
//	float* p;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%.1f ", values[i]);
//	}
//	printf("\n");
//	for (p = values; p<&values[5]; )
//	{
//		*p++ = 0;//第一步p++；第二步*p
//		//等价于 *p = 0; p = p + 1; 虽然++先执行，但是是后置++，所以还是先*p = 0
//		//效果是把values[5]全部改为0
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%.1f ", values[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//指针减去指针 = 中间的元素个数
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen - 1 计数器方式 2 递归方式 3 指针相减的方式
//	char arr[] = "Alisu";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//arr-首元素地址
//	printf("%p\n", &arr[0]);
//	//2个例外
//	//1. &arr 这里的arr表示的是整个数组的地址，&arr是取出整个数组的地址
//	//2.sizeof(arr) 这里的arr是整个数组，sizeof（数组名）计算的是整个数组的大小
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	/*for (int i = 0; i < 10; i++)
//	{
//		printf("%p ---- %p\n", p + i, &arr[i]);
//	}*/
//
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//给数组赋值
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	
//	return 0;
//}

//int main()
//{
//	//二级指针
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;// * 表示ppa指向的是一个 类型为int* 的单元
//	
//	**ppa = 20;
//	printf("%d\n", **ppa);
//
//	return 0;
//
//}


int main()
{
	//指针数组 - 数组
	//数组指针 - 指针
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr2[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", *arr2[i]);
	}
	return 0;
}