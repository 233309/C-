#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//*******************simplistic recursion***************//
//int main()
//{
//	printf("hehe\n");
//	main();
//}

//*******************将输入数字按位权分开***********************//

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//}

//**************求字符串长度******************//

//#include<string.h>
//
//int main()
//{
//	char arr[] = "holle";
//	int len = strlen(arr);
//	printf("%d", len);
//}

//*****************创建自定义函数求字符串长度***********//

//int my_strlen(char*str)
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
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d", len);
//}

//*****************不创建临时变量求字符串长度***********//

//int my_strlen(char* str)
///*har* str：是一个变量声明，它表示str是一个指向字符（char）类型数据的指针。
//   str可以存储一个字符的地址，或者指向一个字符数组（字符串）的首地址。*/
///*str：这是一个变量名，它可以用来表示一个指向字符的指针，也可以表示指向字符数组（字符串）的首地址。*/			
//{
//	/**str在C语言中是指针解引用的操作，它表示获取指针str所指向的值。
//    当str是一个指向字符（char）类型的指针时，*str表示获取指针所指向的字符值。*/
//	if(*str != '\0')//*str取
//	{
//		return 1 + my_strlen(1 + str);
//	}
//
//	else
//	{
//		return 0;
//	}
//
//}
//
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d", len);
//}

/*递归与迭代*/

/*************求n的阶乘*******************/

////一般方法
//int Fac1(int num)//normal solution
//{
//	int sum = 1;
//	int ret = 0;
//	for (ret = 1; ret <= num; ret++)
//	{
//		sum = ret * sum;
//	}
//	return sum;
//}

////递归方法
//int Fac2(int num)
//{
//	if (num <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		num = num * Fac2(num - 1);
//	}
//}
//
//int main()
//{
//	//设置输入数值
//	int ret = 0;
//	int input = 0;
//	scanf("%d", &input);
//
//	//自定义函数处理
//	//ret = Fac1(input);
//	ret = Fac2(input);
//	printf("%d",ret);
//
//
//}

/*************求第n个数字的费波纳系数*****************/

////以递归的方式写
//int bor(int num)
//{
//	if (num <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return bor(num - 1) + bor(num-2);
//	}
//}

////以循环的方式写
//int bor(int num)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (num > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		num--;
//	}	
//
//	return c;
//
//}
//
//int main()
//{
//	int ret = 0;
//	int input = 0;
//	scanf("%d",&input);
//	//使用bor函数
//	ret = bor(input);
//	printf("%d", ret);
//	return 0;
//}