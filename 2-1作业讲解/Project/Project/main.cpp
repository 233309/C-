#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	{
//		int a = 10;//复合语句
//	}
//	printf("%d\n",a);//无法调用
//}

/********创建一个整形变量 赋值并逆序 并且操作一下************/
//void Iint(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//
//void Reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int temp;
//	while (left<right)
//	{
//		temp=arr[left] ;
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//void Print(int arr[],int sz)
//{
//	int i = 0;
//	int count = 0;
//	for (i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//		count++;
//	}
//	printf("\n");
//	
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	Iint(arr, sz);
//	Print(arr,sz);
//	Reverse(arr,sz);
//	Print(arr, sz);
//}

/********交换两个数组之间的元素*******/
//int main()
//{
//	int arr1[] = {1,3,5,7,9};
//	int arr2[] = {2,4,6,8,0};
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//		printf("%d",arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//}

/**********输出什么样的结果***********/
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//强制转换
//	int i = 0;
//	for (i=0;i<4;i++)
//	{
//		*(p+i) = 0;//由于是short类型的指针变量，每次只修改两个字符
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d",arr[i]);
//	}
//}

//int main()
//{
//	int a = 0x11223344;//0x表示16进制，其中11，22，33，44，分别占一个字节
//	char* pa = (char*)&a;
//	*pa = 0;//一个字节置为0
//	printf("%x",a);
//}

/********求一个数二进制表示时1的个数(只能计算正整数版本)***********/
//int count_bit_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a /= 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int count = count_bit_one(a);
//	printf("count=%d",count);
//}

/********求一个数二进制表示时1的个数(可以求负数版本)***********/
//int count_bit_one(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a /= 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int count = count_bit_one(a);
//	printf("count=%d",count);
//}

/********求一个数二进制表示时1的个数(可以求负数版本-1版本)***********/
//int count_bit_one(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int count = count_bit_one(a);
//	printf("count=%d",count);
//}

/********求一个数二进制表示时1的个数(可以求负数版本-2版本)***********/
//int count_bit_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//		//13
//		//1101 (n)
//		//1100(n-1)
//		//1100 (n)
//		//1011 (n-1) 
//		//1000 (n)
//		//0111 (n-1)
//		//0000 (n)
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count=%d", count);
//}

/*************计算两个int变量的二进制数中有多少位不同******************/
//int get_diff_bit(int m, int n)
//{
//	int temp = m^n;//m异或n
//	int count = 0;
//	while (temp)
//	{
//		temp = temp & (temp - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m, n;
//	scanf("%d %d",&m,&n);
//	int count = get_diff_bit(m, n);
//	printf("%d与%d有%d个不同的二进制位",m,n,count);
//}

/***********打印一个二进制的奇数位和偶数位***************/
//void print(int a)
//{
//	printf("打印奇数位");
//	int i = 0;
//	for (i=30;i>=0;i-=2)
//	{
//		printf("%d",(a>>i)&1);
//	}
//	printf("\n");
//	printf("打印偶数位");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (a >> i) & 1);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	print(a);
//}

/******根据输入的数打印乘法表*******/
//void print(int a)
//{
//	int i = 1;
//	for (i=1;i<=a;i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d   ",j,i,i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	print(a);
//}

/**********不使用指针和c语言的库函数逆序字符串类型的数组*************/
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void rever_print(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (right > left)
//	{
//		int temp = arr[left];
// /*temp就是个临时变量，你给他开辟一个int，或者char类型的内存就行
// （保证内存够用，不溢出，都能把arr[x]任意其中一个元素接受到就行*/
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//	printf("%s",arr);
//}
//int main()
//{
//	char ch[] = "abcdef";
//	rever_print(ch);
//}

/**********不使用指针和c语言的库函数逆序字符串类型的数组 使用递归的方法*************/
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void print_reverse(char arr[])
//{
//	
//	int len = my_strlen(arr);
//	char temp = arr[0];
//	arr[0] = arr[len-1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr+1)>=2)
//	{
//		print_reverse(arr + 1);
//	}
//	arr[len - 1] = temp;
//	
//
//}
//
//int main()
//{
//	char ch[] = "abcdf";
//	print_reverse(ch);
//	printf("%s", ch);
//}

/*******用递归设计一个程序，可以计算一个数每一位的大小**********/
//int Conum(unsigned int num)
//{
//	if (num>9)
//	{
//		return Conum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d",&num);
//	int count=Conum(num);
//	printf("%d",count);
//}

/**********编写一个程序，实现n的k次方*************/
//double Fig(int n, int k)
//{
//	if (k < 0)
//	{
//		return (1.0/Fig(n,-k));
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Fig(n, k - 1);
//	}
//}
//
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d%d",&n,&k);
//	double fig=Fig(n,k);
//	printf("%d^%d=%lf", n, k, fig);
//
//}