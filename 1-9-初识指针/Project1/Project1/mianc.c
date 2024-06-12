#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int a = 11;
//	int* b = &a;//创建一个指针变量b，存储a的地址
//	printf("%p\n",b);
//}

//int main()
//{
//	printf("%d\n",sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));
//	//打印结果均为8
//	
//}

/*****************指针类型的作用****************/

//int main()//输出结果相同
//{
//	int a = 0x11223344;
//	int* pb = &a;
//	char* pc = &a;
//	printf("%p\n",pb);
//	printf("%p\n", pc);
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	printf("%d\n",a);
//
//	int b = 0x11223344;
//	char* pb = &b;
//	*pb = 0;
//	printf("%d\n",b);
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pb = &a;
//	char* pc = &a;
//
//	printf("%p\n",pb);
//	printf("%p\n",pb+1);//储存的地址的值增加了四个字节
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//储存地址的值增加了一个字节
//}

//int main()//通过指针和解引用操作符更改数组内容
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//}

//int main()//通过指针和解引用操作符更改数组内容
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//}

//int main()
//{
//	//未初始化的指针变量
//	int* p;//局部变量不初始化，里面默认放的就是随机值
//	*p = 20;
//
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//初始化
//	int* p = NULL;//NULL用来初始化指针，给指针赋值
//
//}

//int main()//指针指向空间释放使用NULL
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	p = NULL;
//	*p = 10;//引发了异常: 写入访问权限冲突
//}

/*********指针运算**************/

//int main()//打印1到10
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d",*p);
//		p++;//指针运算
//	}
//}

//int main()//打印1，3，5，7，9
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = (sizeof(arr) / sizeof(arr[0]))/2;
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d", *p);
//		p+=2;//指针运算
//	}
//}

//int main()//打印10，8，6，4，2
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = (sizeof(arr) / sizeof(arr[0])) / 2;
//	int* p =& arr[9];
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d", *p);
//		p -= 2;//指针运算
//	}
//}

//int main()//指针减去指针得到的是元素之间的个数
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	char ch[5] = {0};
//	printf("%d\n",arr[9]-arr[0]);//9
//	printf("%d\n", arr[0] - arr[9]);//-9
//	printf("%d\n",arr[9]-ch[5]);//结果不确定，指针减指针得到两个元素之前的个数的前提是两个指针在同一个内存空间
//}

/***********使用指针计算字符型数组的长度****************/
//int my_strlen(char * str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end!='\0')//当end这个指针里存储的地址所指向的数值不为'\0'时
//	{
//		end++;//存放str的地址的值+1个char类型的指针变量大小的值
//	}
//	return end-start;
//}
//
//int main()
//{
//	char ch[] = "bit";
//	int len = my_strlen(ch);
//	printf("%d",len);
//}

/*********数组地址和数组首元素地址**************/
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n",arr);//首元素地址
//	printf("%p\n", arr + 1);//比上一个大4
//
//	printf("%p\n",&arr[0]);//首元素地址
//	printf("%p\n", &arr[0]+1);//比上一个大4
//
//	printf("%p\n",&arr);//整个数组的地址
//	printf("%p\n", &arr+1);//比上一个大40
//
//}

//int main()//使用指针的方式更改数组数组元素
//{
//	int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	for (i=0;i<10;i++)
//	{
//		printf("%p  ==== %p\n",p+i,&arr[i]);//输出结果完全一样
//	}
//
//	/*********更改并打印数组************/
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	/*********另一种打印方式************/
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p+i));
//
//	}
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//一级指针
//	int** pa = &p;//二级指针
//	printf("%d ",**pa);
//	**pa = 20;//通过二级指针修改变量值
//	printf("%d ", a);
//}


/***********指针数组与数组指针**************/
//指针数组的本质是数组-存放指针的数组
//数组指针的本质是指针-
int main()
{
	int a = 10, b = 20, c = 30;
	int* arr[3] = {&a,&b,&c};//指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ",*(arr[i]));
	}
}