#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//指针（初阶）部分-----------------------

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6,12
//	return 0;
//}

//指针减去指针得到的是它们之间的 元素 个数，而不是字节个数

//写一个函数逆序字符串内容

//void string_reverse(char* string)
//{
//	int i = 0;
//	int j = 0;
//	while (string[j] != '\0')
//	{
//		j++;
//	}
//	for (i = 0, j = j - 1; i < j; i++, j--)
//	{
//		char tmp = string[i];
//		string[i] = string[j];
//		string[j] = tmp;
//	}
//}

//改进版
#include<assert.h>

//void string_reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	char arr[] = "Hello World!";
//
//	//scanf %s 遇到空格之后不再读取，所以可以用gets() 读取一行的字符串
//
//	string_reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//求Sn = a + aa + aaa + aaaa + aaaaa 其中a是一个数字
//例如a = 2 Sn = 2 + 22 + 222 + 2222 + 22222


//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//自幂数：求1-100000之间的自幂数并输出

//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//1.计算i的位数 - n位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.计算i的每一位的n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.比较 i==sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//打印n行的菱形的 *
//n = 5
//	  *
//   ***
//  *****
// *******
//*********
// *******  1 7
//  *****   2 5
//   ***    3 3
//    *     4 1

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//打印拆成2部分
//	int i = 0;
//	//打印上半部分
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		//打印空格  
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印 *  1 3 5 7 ...
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < n-1; i++)
//	{
//		int j = 0;
//		//打印空格
//		for ( j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//
//		//打印 *   7 5 3 1 
//		for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//结构体初阶------------------------------------------

//喝汽水问题：1瓶汽水1元，2个空瓶可以换1瓶汽水，给20元，可以喝多少汽水？
//ps：注意到 total = 2*money - 1

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//买回来的汽水
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;//换回来的汽水喝完的空瓶  + 上次没用完的空瓶
//	}
//	printf("%d\n", total);
//
//	return 0;
//}



//使用调试技巧-------------------------------

//const int*p 和 int const*p等价 ——对的！

