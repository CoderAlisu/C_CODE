#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
/*Debug:调试版本，包含调试信息，且不作任何优化，便于程序员调试
Release:发布版本，往往是进行了各种优化，使得程序再大小和运行速度上都是最优的，以便用户更好地使用
*/

/*Debug:生成Debug版本的可执行程序——可以调试的，因为文件中包含了调试信息
Release：生成Release版本的可执行程序，Release版本不能调试（加了断点也没用）
*/
//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//Debug和Release区别
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	//Debug版本会报错
//	//Release打印13个hehe——release会对代码优化
//	//system("pause");
//
//}

//调式常用快捷键 f5、f11、f10、f9（切换断点）
//f5 启动调试 +  f9 设置/切换断点(笔记本要按fn)

//f10-逐过程。一步一步走
//f9 逐语句，可以进入函数内部
//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//
//	for (int i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//	return 0;
//}

//调试过程中查看程序当前信息
//查看临时变量——监视（watch）窗口
//看内存——内存（memory）窗口
//Debug-windows-disassembly 查看汇编代码
//-rigister：看寄存器内容
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//调用堆栈——callstack——查看程序中函数的调用关系
//调试：f10走起
//右击断点，可以添加条件，停在你想要停的位置
//int main()
//{
//	//求n！的和
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//
//}

//int main()
//{
//	//进行调试：看&arr[12]和&i
//	//栈区的默认使用：先使用高地址处的空间，再使用低地址处的空间
//	//数组随着下标的增长，地址是由低到高变化的
//
//	//vc6.0下， <=10就死循环
//	//gcc编译器下， <=11 死循环
//	//vs2013 <=12 死循环
//	//vs2022 换成x86 编译 <=12 死循环
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for ( i = 0; i <= 12; i++)//根据i<=的数的不同，可能栈会崩溃，或者死循环
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	//在for循环里面定义i是C++的写法！
//
//	/*结论：写代码尽量别越界，容易导致死循环*/
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%p\n", &i);
//	printf("%p\n", arr);
//	//Debug版本：i的地址大于arr的地址——越界访问数组可能会影响到i的值
//	//&i: 010FF6E4
//	//arr:010FF6B4
//
//	//Release版本：进行了优化，i的地址小于arr地址——不会影响到i的值
//	//&i: 008FF984
//	//arr:008FF988
//
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		/**dest = *src;
//		dest++;
//		src++;*/
//		//优化1
//		*dest++ = *src++;
//	}
//	*dest = '\0';
//}
//void my_strcpy(char* dest, char* src)
//{
//	//优化2
//	while(*dest++ = *src++)// \0 对应 0 
//	{
//		;
//	}
//	
//}

//void my_strcpy(char* dest, char* src)
//{
//	//优化3，但是这样的话只能规避错误，不能找出哪里出错
//	if (dest != NULL && src != NULL)
//	{
//		while(*dest++ = *src++)// \0 对应 0 
//		{
//			;
//		}
//	}
//}


#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	//如果dest或者src为NULL，就会报错
//	//缺点：如果吧dest和src写反了程序能运行。但是结果是错误的！
//	while (*dest++ = *src++)// \0 对应 0 
//	{
//		;
//	}
//	//结论：多用assert
//}

//void my_strcpy(char* dest, const char* src)//优化4：const，说明*src不能改变
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	
//	//如果写反了src和dest，代码是编译不通过的！
//	while (*dest++ = *src++)// \0 对应 0 
//	{
//		;
//	}
//	//结论：多用assert
//}


//char* my_strcpy(char* dest, const char* src)//优化5：返回值修改为char*
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *src++)// \0 对应 0 
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy函数的实现
//	char arr1[] = "**********";
//	char arr2[] = "Alisu";
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}


//int main()
//{
//	const int num = 10;//加了const，主观上num是不能改的
//	
//	//const int* p = &num;//解决：加上const，这样p就不能改num的值
//	////*p = 20;
//	//const放在指针变量*的左边的时候（如上），修饰的是*p，也就是说不能通过p来改变*p（num）的值
//
//	int n = 100;
//	int* const p = &num;
//	//p = &n;
//	//const放在指针变量*的右边的时候（如上），修饰的是指针变量p本身，就是说p不能被改变
//
//
//	printf("%d\n", num);//结果仍为20，说明通过*p改了num的值，这是非法的
//	return 0;
//}

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "Alisu";
	int len = my_strlen(arr);
	printf("len = %d\n", len);
	return 0;
}

/*常见错误：编译错误——语法等等
链接错误：无法找到外部符号——要么是没定义，要么是名字写错了
运行错误：借助调试，逐步定位，最难搞
*/