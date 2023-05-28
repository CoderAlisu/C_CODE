#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

/*
strncmp
strstr
字符函数：
内存操作函数
*/

//strncmp
//int strncmp(const char* str1, const char* str2, size_t count);
//count表示要比较的字符个数
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 3);//0
//	//int ret = strncmp(p1, p2, 4);//-1
//	printf("%d\n", ret);
//	return 0;
//}

//strstr：查找字符串
//char* strstr(const char* string,const char* subStr);
//注：读文档的时候 ①NULL表示空指针 ②Nul/Null表示 '\0'
//在string中找subStr这个字符串
//找到了返回  首次找到的时候 的起始位置，找不到返回空指针

#include<assert.h>

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;//用来记录当前比较的起点
//
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到字串
//		}
//		cur++;
//	}
//	return NULL;//找不到字串
//
//}
//
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("字串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//strtok - 字符串分割函数
//char* strtok(char* str,const char* sep);
//strtok会改变被操作的字符串，所以一般先拷贝一份原字符串，然后再进行切割
//第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
//strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。
//(注: strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。

//strtok函数的第一个参数不为 NULL，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置
//strtok函数的第一个参数为NULL，函数将在[同一个字符串]中被保存的位置开始，查找下一个标记。如果字符串中不存在更多的标记，则返回 NULL 指针。


//
//int main()
//{
//	/*char arr[] = "Alisu@LL.com";
//	char* p = "@.";*/
//
//	char arr[] = "192.168.12.121";
//	char* p = ".";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);//第二次传NULL，表示仍然切割第一次传过去的字符串
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);//第三次传NULL，表示仍然切割第一次传过去的字符串
//	//printf("%s\n", ret);
//
//	char* ret = NULL;
//	for (ret = strtok(arr,p); ret != NULL; ret = strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//strerror - 返回错误码，所对应的错误信息
//char* strerror(int errnum);

//#include<errno.h>
//
//int main()
//{
//	//错误码 - 错误信息
//	//0 - No error
//	//1 - Operation not permitted
//	//2 - No such file or directory
//	//...
//	//char* str = strerror(errno);
//	////errno 是一个全局的错误码的变量
//	////当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//	//printf("%s\n", str);
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");//找当前项目的文件夹下有没有“test.txt”的文件
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success.\n");
//	}
//
//	return 0;
//}


//字符（控制）函数

#include<ctype.h>

int main()
{
	//char ch = 'A';
	//int ret = islower(ch);
	////返回0 - 不是小写字符
	////返回非0 - 是小写
	//printf("%d\n", ret);

	//char ch = tolower('A');
	//putchar(ch);


	char arr[] = "I Am a Student.";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);//大写字母转小写
		}
		i++;
	}
	printf("%s\n", arr);

	return 0;
}
