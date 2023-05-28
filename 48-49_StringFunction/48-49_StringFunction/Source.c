#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

/*
* 目录：
求字符串长度：strlen
长度不受限制的字符串函数：strcpy、strcat、strcmp——遇到\0才会停，不安全
长度受限制的字符串函数：strncpy、strncat、strncmp
字符串查找：strstr、strtok
错误信息报告：strerror、
字符操作
内存操作函数：memcpy、memmove、memset、memcmp
*/



//实现strlen的3种方法 ------------------------
//1.计数器的方法
//2.递归
//3.指针-指针

#include<assert.h>

//int my_strlen(const char* str)
//{
//	//计数器
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')//while(*str) 也行
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


//int my_strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		str++;
//		return 1 + my_strlen(str);
//	}
//}
//
//int main()
//{
//	//int len = strlen("abcdef");
//	////strlen接受字符串，一直往后找，找到'\0'
//	//printf("%d\n", len);//6
//
//	//错误示范
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//int len2 = strlen(arr);
//	//printf("%d\n", len2);//随机值
//
//	char arr[] = "abcdef";
//	int len2 = my_strlen(arr);
//	printf("%d\n", len2);
//
//
//	/*if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}*/
//	//打印hehe
//	//解释：strlen定义：size_t strlen(const char* str)
//	//size_t == unsigned int 所以2个无符号数相减，仍然是无符号数，一直大于0
//
//
//	return 0;
//}


//strcpy ----------------
//char* strcpy(char* dest,const char* src)
//1. src必须以\0结尾
//2. dest必须足够大，才能放下src
//3. 目标空间必须可变（不要用常量字符串）


//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)//最后一次\0赋值过去之后，表达式的值为0，while也就停下来了
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "rin";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//
//}


//strcat------------------
//char* strcat(char* dest, const char* src);
//1. src必须以\0为结束
//2. dest必须有足够大的空间，能容纳下src的内容
//3. dest必须可修改
//4. dest必须含有\0


//void my_strcat(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src != NULL);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while(*dest++ = *src++)
//	{ }
//	
//}
//
//int main()
//{
//	char arr1[20] = "hello";//dest必须有足够大的空间，能容纳下src的内容
//	char arr2[] = "world";//world从hello后面的\0开始追加，不管\0后面的东西
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//strcmp
//int strcmp(const char* str1, const char* str2);
//比较方式：比较对应的字符的ASCII码值 str1>str2 返回大于0的；相等返回0；小于返回小于0的数 (不同的编译器返回的值可能不同)


//int my_strcmp(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	//比较
//	while (*p1 && *p2)
//	{
//		if (*p1 > *p2)
//		{
//			return 1;
//		}
//		else if (*p1 < *p2)
//		{
//			return -1;
//		}
//		p1++;
//		p2++;
//	}
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char* p1 = "cabc";
//	char* p2 = "abc";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}


//strncpy-------------
//char* strncpy(char* strDest, const char* strSource, size_t count); //count的单位是字节
//
//char* my_strncpy(char* dest, const char* src, int k)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (k)
//	{
//		if (*src == '\0')
//		{
//			*dest++ = '\0';
//		}
//		else
//		{
//			*dest++ = *src++;
//		}
//		k--;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	/*char arr1[5] = "abc";
//	char arr2[] = "hello world";
//	strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);*/
//
//	char arr1[10] = "abcdefg";
//	char arr2[] = "rin";
//	my_strncpy(arr1, arr2, 5);//arr2不够的会用\0补上
//	printf("%s\n", arr1);
//	return 0;
//}


//strncat-----------------------
//拷贝完之后会放一个\0到dest字符串里面

int main()
{
	char arr1[30] = "abc\0xxxxxxxxxx";
	char arr2[] = "hello";
	//strncat(arr1, arr2, 3);
	strncat(arr1, arr2, 6);//追加的比arr更长，不会再后面再加0了，只会把 arr2拷贝 + 1个"\0"

	return 0;
}