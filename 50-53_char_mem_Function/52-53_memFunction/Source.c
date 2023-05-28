#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//str..类的字符串操作函数 的操作对象一般都是字符串

//mem类： - 整型、浮点型、结构体
//memcpy
//memmove
//memcmp
//memset

//memcpy：--------------------------------------- 
// void* memcpy(void* dest, const void* src, size_t num); 
//num的单位是字节

struct S
{
	char name[20];
	int age;
};

#include<assert.h>

void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;

	assert(dest != NULL);
	assert(src != NULL);

	while (num--)
	{
		*(char*)dest = *(char*)src;//一个字节一个字节地拷贝
		++(char*)dest;//后置++需要多一个括号
		++(char*)src;
	}
	return ret;
}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct S arr3[3] = { {"Alisu",20},{"Lily",20} };
//	struct S arr4[3] = { 0 };
//
//	//char* dest, const char* src
//	//strcpy(arr2, arr1);
//	//用strcpy不能完成整型数组的拷贝
//	//所以就有了memcpy
//
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	
//
//	return 0;
//}


//memmove()
//void* memmove(void* dest, const void* src, size_t count);


//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	int dist = *(char*)dest - *(char*)src;
//
//	if (dist <= 0)
//	{
//		//从前往后复制
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//从后往前复制
//		while (num--)
//		{
//			//进入循环之后num已经减一了！！
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//}

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	//第二种实现方式
//	assert(dest != NULL);
//	assert(src != NULL);
//	
//	void* ret = dest;
//	
//	if (dest < src || dest > (char*)src + num)
//	{
//		//两端：前->后 拷贝
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			((char*)src)++;
//		}
//	}
//	else
//	{
//		//中间：从后向前 拷贝
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//
//	return ret;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//
//	//my_memcpy(arr + 2, arr, 20);//目标：把12345 拷贝到 34567的位置上去
//	
//	my_memmove(arr + 2, arr, 20);
//
//	//memcpy(arr + 2, arr, 20);//库里面的memcpy也可以处理内存重叠的情况
//
//	/*C语言标准规定：
//	①memcpy处理内存不重叠的复制
//	②memmove处理内存重叠的复制
//	*/
//
//	//my_memcpy的缺点，拷贝的dest和src不能有同一块的空间（不能有内存重叠的情况），否则会提前改变值
//	//memmove() - 处理内存重叠的情况
//
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//但是结果和一开始的目标预想的是不同的
//	}
//	return 0;
//}


//memcmp：比较两个指针指向的num个字节
//int memcmp(const void* ptr1, const void* ptr2, size_t num);
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,3,4 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}


//memset - 内存设置
//void* memeset(void* dest, int c,size_t count) 
//c表示要设置的值、count是字节数

int main()
{
	char arr[10] = "";
	memset(arr, '#', 10);


	return 0;
}