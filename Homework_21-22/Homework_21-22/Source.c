#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//1.returnֻ�ܷ���һ����
//2. �����Ķ��������ʹ��֮ǰ������ ��Ҳ������������ʹ�ã�������Էź���
//3. excel((v1,v2),(v3,v4),v5,v6)��ʵ�θ����� 4 ����ǰ�������С�����Ƕ��ű��ʽ(���ű��ʽ��һ������)
// �൱�� excel(v2,v4,v5,v6)
//4. ���ھ� ���Լ� ���� һЩ������ϣ��� ��ĳ����ϵСһЩ

//9.ð������
//void bubble_sort(int* arr, int n)
//{
//	//��㣺����
//	for (int i = 0; i < n-1; i++)
//	{
//		//�ڲ㣺ÿ�˵�����
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


/*����һ���������飬��ɣ�
1 ʵ�ֺ���init������ʼ������ÿ��ֵΪ0
2 ʵ��print������ӡÿ��Ԫ��
3 ʵ��reverse�����������Ԫ�ص�����*/

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



/*������������ҵ*/
// ȫ�ֱ�������ʼ����Ĭ��Ϊ0
// �������ȼ����



//12.�����������1�ĸ���

//int count_bit_one(unsigned int n)
//{
//	//����%2 �� /2 �ķ��������������ڸ���
//	//���԰�n�ĳ� unsigned int�����������������޷��������� ���Ϳ������ڸ�����
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
//	//�� �� 1 ��λ��
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
//		//�� n & (n - 1)����ȥ�� n �����ұߵ�1
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

//10. ��������в�ͬλ�ĸ���
// ����int��32bit������m��n�Ķ����Ʊ���У��ж��ٸ�bit��ͬ��
//���磺1999 2299  �����7
//int main()
//{
//	int num1, num2;
//	int count = 0;
//	scanf("%d%d", &num1, &num2);
//	int num3 = num1 ^ num2;//���
//	printf("num1 = %x\n", num1);
//	printf("num2 = %x\n", num2);
//	printf("num3 = %x\n", num3);
//
//	//����num3��1�ĸ���
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


//11. ��ӡ�������е�����λ��ż��λ
//��ȡһ����������������λ��ż��λ���ֱ��ӡ

//void print(int m)
//{
//	printf("����λ��");
//	for (int i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("ż��λ��");
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


//13. ������ʱ����������2����
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

//14.��ָ���ӡ����
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

/*����������ҵ�����йصݹ�*/
//����ⲿ�֣�
//��ӡ�˷�n*n�ھ���n�����Լ�ָ��

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

//7.�ݹ�ʵ�ִ�ӡһ������ÿһλ

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

//8.��׳ˣ��ݹ�ͷǵݹ�2�ַ�ʽʵ��

//int factorial(int n)
//{
//	//1.�ݹ�
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
//	//ѭ��
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

//9.strlen��ģ��ʵ�֡����ݹ� + �ǵݹ�

//int my_strlen(char* c)
//{
//	//�ݹ�
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
	//�ǵݹ�
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

//10.�ַ������򣨵ݹ�ʵ��  abcdefΪ��
//�� a��f����
//�� reverse�м���ַ���
//��������2���ķ�ʽ�����м���ַ����ǱȽ��ѵģ��µķ�����
/*��a�ó���
��f�ŵ�a����
��f�š�\0�� ��reverse�м��ַ���
��a�ŵ�ԭ��f��λ��*/
//void reverse_string(char* string)
//{
//	char temp = string[0];//��a�ó���
//	int len = my_strlen(string);
//	string[0] = string[len - 1];//��f�ŵ�a����
//	string[len - 1] = '\0';//��f�š�\0�� ��reverse�м��ַ���
//	if (my_strlen(string+1) >= 2)
//	{
//		reverse_string(string + 1);
//	}
//	string[len - 1] = temp;//��a�ŵ�ԭ��f��λ��
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


//12.�ݹ�ʵ��n��k�η�
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


//13.����쳲������������ݹ� + �ǵݹ�

//int fib(int n)
//{
//	//�ݹ�
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
	//�ǵݹ�
	int	a = 1;
	int b = 1;
	int c = 1;//��֤n==1��n==2ʱ����ֵΪ1
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