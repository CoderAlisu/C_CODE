#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//1.return只能返回一个数
//2. 函数的定义必须在使用之前——错 ：也可以先声明后使用，定义可以放后面
//3. excel((v1,v2),(v3,v4),v5,v6)的实参个数是 4 个，前面的两个小括号是逗号表达式(逗号表达式算一个参数)
// 相当于 excel(v2,v4,v5,v6)
//4. 高内聚 ：自己 独立 一些、低耦合：和 别的程序关系小一些

//9.冒泡排序
//void bubble_sort(int* arr, int n)
//{
//	//外层：趟数
//	for (int i = 0; i < n-1; i++)
//	{
//		//内层：每趟的排序
//		for (int j = 0; j < n-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 8,9,15,6,5,3,4,1,2,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


/*创建一个整形数组，完成：
1 实现函数init（）初始化函数每个值为0
2 实现print（）打印每个元素
3 实现reverse（）完成数组元素的逆置*/

//void init(int* arr, int length)
//{
//	for (int i = 0; i < length; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int* arr, int length)
//{
//	for (int i = 0; i < length; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int* arr, int length)
//{
//	for (int i = 0,j = length - 1; i < j; i++,j--)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//	}
//}
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr, sz);
//	print(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//	printf("before:\n");
//	print(arr, sz);
//	reverse(arr, sz);
//	printf("after\n");
//	print(arr, sz);
//	return 0;
//}



/*操作符详解的作业*/
// 全局变量不初始化，默认为0
// 逗号优先级最低



//12.计算二进制中1的个数

//int count_bit_one(unsigned int n)
//{
//	//①用%2 再 /2 的方法——不能用于负数
//	//可以把n改成 unsigned int（即把所有数当作无符号数处理） ，就可以用于负数了
//	int count = 0;
//	while (n > 0)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//int count_bit_one(int n)
//{
//	int count = 0;
//	//② 和 1 按位与
//	for (int i = 0; i < 32; i++)
//	{
//		if (1 == ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		//③ n & (n - 1)可以去除 n 的最右边的1
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count =	%d\n", count);
//	return 0;
//}

//10. 求二进制中不同位的个数
// 两个int（32bit）整数m和n的二进制表达中，有多少个bit不同？
//例如：1999 2299  输出：7
//int main()
//{
//	int num1, num2;
//	int count = 0;
//	scanf("%d%d", &num1, &num2);
//	int num3 = num1 ^ num2;//异或
//	printf("num1 = %x\n", num1);
//	printf("num2 = %x\n", num2);
//	printf("num3 = %x\n", num3);
//
//	//计算num3中1的个数
//	for (int i = 0; i < 32; i++)
//	{
//		if (num3 & 1 == 1)
//		{
//			count++;
//		}
//		num3 /= 2;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}


//11. 打印二进制中的奇数位和偶数位
//获取一个二进制数的奇数位和偶数位，分别打印

//void print(int m)
//{
//	printf("奇数位：");
//	for (int i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("偶数位：");
//	for (int i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//}
//
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


//13. 不用临时变量，交换2个数
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("before: a = %d, b = %d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after: a = %d, b = %d\n", a, b);
//
//	return 0;
//}

//14.用指针打印数组
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("arr[%d] = %d \n", i, *(p + i));
//	}
//	return 0;
//}

/*函数部分作业——有关递归*/
//编程题部分：
//打印乘法n*n口诀表（n可以自己指定

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//7.递归实现打印一个数的每一位

//void print(int n)
//{
//	if(n > 9)
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//	else
//	{
//		printf("%d ", n);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//8.求阶乘，递归和非递归2种方式实现

//int factorial(int n)
//{
//	//1.递归
//	if (n == 0 || n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * factorial(n - 1);
//	}
//}

//int factorial(int n)
//{
//	//循环
//	int sum = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = factorial(n);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//9.strlen的模拟实现——递归 + 非递归

//int my_strlen(char* c)
//{
//	//递归
//	if (*c == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(c + 1);
//	}
//}

int my_strlen(char* c)
{
	//非递归
	int len = 0;
	while (*c != '\0')
	{
		len++;
		c = c + 1;
	}
	return len;
}
//
//int main()
//{
//	char arr[] = "Alisu";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//10.字符串逆序（递归实现  abcdef为例
//① a和f交换
//② reverse中间的字符串
//但是以上2步的方式逆序中间的字符串是比较难的，新的方法：
/*①a拿出来
②f放到a上面
③f放‘\0’ ，reverse中间字符串
④a放到原本f的位置*/
//void reverse_string(char* string)
//{
//	char temp = string[0];//①a拿出来
//	int len = my_strlen(string);
//	string[0] = string[len - 1];//②f放到a上面
//	string[len - 1] = '\0';//③f放‘\0’ ，reverse中间字符串
//	if (my_strlen(string+1) >= 2)
//	{
//		reverse_string(string + 1);
//	}
//	string[len - 1] = temp;//④a放到原本f的位置
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("before:%s\n", arr);
//	reverse_string(arr);
//	printf("after:%s\n", arr);
//
//}

//int DigitSum(int n)
//{
//	if (n <= 9)
//	{
//		return n;
//	}
//	else 
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//12.递归实现n的k次方
//
//double nk_power(int n, int k)
//{
//	if (k < 0)
//	{
//		return (1 / nk_power(n, -k));
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * nk_power(n, k - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double result = nk_power(n, k);
//	printf("result = %lf\n", result);
//	return 0;
//}


//13.计算斐波那契数——递归 + 非递归

//int fib(int n)
//{
//	//递归
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else 
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}

int fib(int n)
{
	//非递归
	int	a = 1;
	int b = 1;
	int c = 1;//保证n==1和n==2时返回值为1
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("ret = %d\n", ret);
	return 0;
}