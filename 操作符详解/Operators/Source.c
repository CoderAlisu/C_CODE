#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*右移操作符：
1.算术右移
	右边丢弃，左边补原符号位
2.逻辑右移 
	右边丢弃，左边补0
*/
//int main()
//{
//	int a = -1;
//	int b = a >> 1;//负数右移
//	printf("b = %d\n", b);
//
//	int x = 16;
//	int y = x >> 1;//正数右移
//	printf("y = %d\n", y);
//
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//整数有3种形式：原、反、补
//	//存到内存中的是 补码
//	//10000000 00000000 00000000 00000001 -原码
//	//11111111 11111111 11111111 11111110 -反码
//	//11111111 11111111 11111111 11111111 -补码
//	
//	int b = a >> 1;
//	printf("b = %d", b);//-1
//	return 0;
//}

/*左移操作符:
	左边丢弃，右边补0
*/
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	printf("b = %d\n", b);//10
//	return 0;
//}
//
//int main()
//{
//	//& - 按位与
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	//为了方便不写出32位的二进制
//	//011
//	//101
//	//001 - 按位与结果
//	printf("c = %d\n", c);//1
//	//| -按位或
//	c = a | b;
//	//011
//	//101
//	//111
//	printf("c = %d\n", c);//7
//
//	//^ - 异或
//	c = a ^ b;
//	//011
//	//101
//	//110
//	printf("c = %d\n", c);//6
//	return 0;
//}

/*不创建临时变量，实现2个数的交换*/
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("before: a = %d,b = %d\n", a, b);
//	//方法一：
//	//int tmp = a;
//	//a = b;
//	//b = tmp;
//
//	//2 加减法——可能会溢出
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	
//	//3 异或方法
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after: a = %d,b = %d\n", a, b);
//	return 0;
//}

///*练习：求一个整数存储在内存中二进制位 1 的个数*/
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//
//	////对于 正整数 可以使用的方法：思想是十进制中求123的各个位置上的数，先%10再/10 ，可得到 3 2 1
//	//while (num)
//	//{
//	//	if (num % 2 == 1)
//	//	{
//	//		count++;
//	//	}
//	//	num = num / 2;
//	//}
//
//	//可以适用于全部情况：——计算二进制的1的个数即可
//	//num & 1 --求出num二进制最低位是否为1
//	for (int i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//
//	printf("count = %d\n", count);
//	
//	return 0;
//}



//int main()
//{
//	//复合赋值符 -= &= ^= /= 等等
//	
//	//单目操作符:!、-、+、&（取地址操作符）、*（解引用操作符）、sizeof()
//	int a = 10;
//	//printf("%d\n", !a);//0
//	if (a)//a为真，执行if语句
//	{
//		printf("Hello.\n");
//	}
//	if (!a)//a为假，执行if语句
//	{
//		printf("Hello.\n");
//	}
//
//
//	return 0;
//}


//int main()
//{
//	//int a = 10;
//	//char c = 'r';
//	//char* p = &c;
//	//int arr[10] = { 0 };
//	//
//	////sizeof()--计算变量所占空间的大小，单位是字节
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));
//
//	//printf("%d\n", sizeof(c));//1
//	//printf("%d\n", sizeof(char));
//	//
//	//printf("%d\n", sizeof(p));//4 or 8
//	//printf("%d\n", sizeof(char*));
//	//
//	////注意到数组也是有类型的
//	//printf("%d\n", sizeof(arr));//40
//	//printf("%d\n", sizeof(int [10]));//40
//	//printf("%d\n", sizeof(int[5]));//20
//
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2
//	printf("%d\n", s);//0
//	//原理：不管a+5等于多少，存到了s里面，就是short类型，所以是 2
//	//sizeof(表达式)里面的表达式是不会真实进行运算的！
//
//
//	return 0;
//}


//int main()
//{
//	////~ 按位取反
//	//int a = 0;
//	////实际有32位，为了方便，只写8位
//	////00000000  补码0
//	////11111111	按位取反
//	////00000001	转原码
//	//printf("%d\n", ~a);//-1
//
//	int a = 11;
//	//1011,要变成1111
//	a = a | (1 << 2);
//	printf("%d\n", a);//15
//	//要改回去 1111 -》 1011,过程(8bit)：
//	//00001111
//	//11111011  -按位取反
//	//00001011
//	a = a & (~(1 << 2));
//	printf("%d\n", a);//11
//
//	return 0;
//}

//int main()
//{
//	//短路效应
//
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);//1 2 3 4
//	//i = a++ || ++b || d++;
//	//printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);//1 3 3 4 
//
//	return 0;
//}


//int main()
//{
//	//三目操作符
//	int a = 10;
//	int b = 20;
//	int max;
//	b = (a > 5) ? 3 : -3;
//	printf("%d\n", b);
//
//	//求两个数的较大值
//	max = (a > b) ? a : b;
//
//	return 0;
//}


//int get_max(int x, int y)
//{
//	return (x > y) ? x : y;
//}
//
//int main()
//{
//	//int a[10] = { 0 };
//	//a[4] = 5;//对于[]来说，有2个操作数：一个是数组名，一个是下标
//
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//()函数调用操作符：现在有3个操作数-函数名、a、b
//	return 0;
//}


//创建一个结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	//成员访问操作符： . 和 ->
//	//创建一个学生对象stu1
//	struct Stu stu1 = { "Alisu",20,"12345678"};
//	//结构体变量.成员名
//	/*printf("%s\n", stu1.name);
//	printf("%d\n", stu1.age);
//	printf("%s\n", stu1.id);*/
//	struct Stu* ps = &stu1;
//
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);
//	//结构体指针->成员名
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//
//	return 0;
//}


//int main()
//{
//	char a = 3;
//	//00000011 -a
//	char b = 127;
//	//01111111 -b
//	char c = a + b;
//	//a+b要先进行整型提升（补位规则：按最高位符号位来补）
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 01111111
//	//00000000 00000000 00000000 10000010
//	
//	//10000010 - c 
//
//	printf("%d\n", c);//%d c要先整型提升，再打印
//	//11111111 11111111 11111111 10000010  补码
//	//10000000 00000000 00000000 01111110  原码：-126
//
//	return 0;
//}


//int main()
//{
//	//整型提升案例：——结果只打印c
//	char a = 0xb6;//1011 0110 补位是补1
//	short b = 0xb600;// 1011 0110 0000 0000 补位是补1
//	int c = 0xb6000000;
//	if (a == 0xb6)
//	{
//		printf("a");
//	}
//	if (b == 0xb600)
//	{
//		printf("b");
//	}
//	if (c == 0xb6000000)
//	{
//		printf("c");
//	}
//	return 0;
//}


int main()
{
	//整型提升案例2
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4，因为这里进行了整形运算，需要提升
	printf("%u\n", sizeof(!c));//1
	//如果变量长度小于整型的，在运算时都要转化成整型
	return 0;

}