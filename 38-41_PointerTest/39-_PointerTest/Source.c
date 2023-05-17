#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//指针笔试题讲解（8道）


//第一题
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//&a是数组的地址(类型是int [5]),所以要强制转换类型
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2, 5
//	return 0;
//}


//第二题———写错了，要注意
// 考点：指针加减整数的运算，结果取决于指针的类型
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p的值为0x100000，如下表达式的值分别为多少？
////已知，结构体Test类型的变量大小为20个字节
//int main()
//{
//	p =(struct Test*) 0x100000;
//	printf("%p\n", p + 0x1);
//	//p指向的地址是20个字节，+1就是增加20个字节  0x 100014 
//
//	printf("%p\n", (unsigned long)p + 0x1);
//	//0x 100001
//	//p先转换成10进制，再加1，结果打印出来就是加了1的地址
//
//	printf("%p\n", (unsigned int*)p + 0x1);
//	//p先转换成int*的类型的指针，在+1，就是增加4个字节
//	//0x 100004
//
//	return 0;
//}

//第三题：写对了！

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	//ptr1指向a数组的最后一个的后一个位置
//	int* ptr2 = (int*)((int)a + 1);
//	//a首元素地址，强制转换成int型，+1，最后就是整个地址 + 1
//	//01 00（ptr2指向这个字节） 00 00 
//	//02 00 00 00
//	printf("%x,%x", ptr1[-1], *ptr2);
//	//4 -> 0x4
//	//0x 02000000
//	return 0;
//}


//第四题：

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	//1 3 
//	//5 0
//	//0 0
//	int* p = a[0];//第一行的数组名
//	printf("%d\n", p[0]);//a[0][0] = 1
//	return 0;
//}

//第五题：——需要再看！
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	//a类型：int[5]
//	//p类型：int[4]
//	//a强制赋值给了p
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//0x ff ff ff fc（-4的补码在内存的表示） , - 4
//	// p[4][2] == *(*(p+4) +2)
//	return 0;
//
//}


//第六题：——对了一半
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	//1 2 3 4 5
//	//6 7 8 9 10
//	int* ptr1 = (int*)(&aa + 1);
//	//&aa 数组的地址
//	int* ptr2 = (int*)(*(aa + 1));// *(aa + 1) 等价于 aa[1] - 第二行首元素地址！！！
//	//解引用拿到的是第二行的首元素的地址！！！
//
//	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));
//	//10  5
//	return 0;
//}


//第七题：
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	//三个常量字符串，a存的是三个字符串的首地址
//	char** pa = a;
//	pa++;//pa++是跳过 一个char* 的变量
//	printf("%s\n", *pa);//at
//
//	return 0;
//}


//第八题：

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3, c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//"POINT"
	printf("%s\n", *--*++cpp + 3);//++cpp 指向c+1（记住cpp此时指向 c+1 ）
	//解引用，拿到c+1
	//--， c+1变成c
	//解引用，拿到“ENTER”中第一个字符 E 的地址
	//+3，指向第四个字符的E
	//打印：ER

	printf("%s\n", *cpp[-2] + 3);
	//cpp[-2] = c+3
	//解引用，拿到FIRST
	//+3,从字符S开始打印：ST

	printf("%s\n", cpp[-1][-1] + 1);
	//cpp[-1][-1]:*(*(cpp-1)-1) , 拿到“NEW”
	//+1,从E开始打印：EW
	return 0;
}



