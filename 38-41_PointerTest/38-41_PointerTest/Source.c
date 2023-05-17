#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	//char arr[] = "abcdef";
	//x86平台
	//printf("%d\n", sizeof(arr));//7  
	//printf("%d\n", sizeof(arr + 0));//4/8 首元素地址
	//printf("%d\n", sizeof(*arr));//1  'a'
	//printf("%d\n", sizeof(arr[1]));//1 'b'
	//printf("%d\n", sizeof(&arr));//4/8 指针
	//printf("%d\n", sizeof(&arr + 1));//4/8 指针
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 指针

	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr + 1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//5


	//------------
	char* p = "abcdef";//把 常量 字符串的首地址交给指针p
	//printf("%d\n", sizeof(p));//4/8
	//printf("%d\n", sizeof(p + 1));//4/8  得到的是字符b的地址
	//printf("%d\n", sizeof(*p));//1 'a'
	//printf("%d\n", sizeof(p[0]));//1 'a'
	//printf("%d\n", sizeof(&p));//4/8  指针的地址
	//printf("%d\n", sizeof(&p + 1));//4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8 第二个元素的地址


	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//随机值——错了！！答案：5   p存的是a的地址，p+1是b的地址
	////printf("%d\n", strlen(*p));//err
	////printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//随机值
	//printf("%d\n", strlen(&p + 1));//随机值
	//printf("%d\n", strlen(&p[0] + 1));//5  字符b的地址

	//二维数组--------------------------------------------
//	int a[3][4] = { 0 };											//ANS
//	printf("%d\n", sizeof(a));//48									48
//	printf("%d\n", sizeof(a[0][0]));//4 第一行第一个元素				4
//
//	printf("%d\n", sizeof(a[0]));//4/8								16 （a[0] 是第一行一维数组的数组名，不是地址！sizeof(数组名)）
//	printf("%d\n", sizeof(a[0] + 1));//4/8							4/8（a[0]没有单独放到sizeof里，这里就理解成首元素地址，
//	//加1就是第一行第二个元素的地址）
//	printf("%d\n", sizeof(*(a[0] + 1)));//4							4 是第一行第二个元素的大小
//	
//	printf("%d\n", sizeof(a + 1));//4/8								4/8  
//	//a是二维数组的数组名，没有sizeof(a)，也没有&(a)，所以a是首元素地址
//	//二维数组的首元素是它的第一行（把二维数组看成一维数组）,a+1就是第二行的地址
//
//	printf("%d\n", sizeof(*(a + 1)));//4							16  第二行的数组的大小
//
//	printf("%d\n", sizeof(&a[0] + 1));//4/8							4/8 第二行的地址（&a[0]是第一行的地址）
//	printf("%d\n", sizeof(*(&a[0] + 1)));//4						16  
//
//	printf("%d\n", sizeof(*a));//4									16 *a是第一行
//	printf("%d\n", sizeof(a[3]));//err								16 a[3]是第四行的数组名，但是sizeof不会真正去访问这个地方，所以不会报错
//
//	/*没注意到的点：
//	以上二维数组可以看作3个一维数组，a[i]可以单独看成这一行的数组名，如a[0]是第一行数组的数组名（这时候求值的时候要注意“两个例外”了！）
//	②二维数组的数组名：是它的首元素地址（此时要把二维数组看成一维数组），首元素地址就是a[0]这个一维数组的地址(第一行的地址)
//	③sizeof() 括号里面的表达式是不计算的，也不会去访问对应的空间 
//	------------------------------------------------------- */
//
//
//	//总结：
//	//1.sizeof(数组名),这里的数组名表示整个数组，计算的是整个数组的大小
//	//2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//	//3.除此之外，所有的数组名都表示首元素的地址！
//
//
//	return 0;
//}