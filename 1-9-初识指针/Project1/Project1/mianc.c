#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int a = 11;
//	int* b = &a;//����һ��ָ�����b���洢a�ĵ�ַ
//	printf("%p\n",b);
//}

//int main()
//{
//	printf("%d\n",sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));
//	//��ӡ�����Ϊ8
//	
//}

/*****************ָ�����͵�����****************/

//int main()//��������ͬ
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
//	printf("%p\n",pb+1);//����ĵ�ַ��ֵ�������ĸ��ֽ�
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//�����ַ��ֵ������һ���ֽ�
//}

//int main()//ͨ��ָ��ͽ����ò�����������������
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//}

//int main()//ͨ��ָ��ͽ����ò�����������������
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
//	//δ��ʼ����ָ�����
//	int* p;//�ֲ���������ʼ��������Ĭ�Ϸŵľ������ֵ
//	*p = 20;
//
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//��ʼ��
//	int* p = NULL;//NULL������ʼ��ָ�룬��ָ�븳ֵ
//
//}

//int main()//ָ��ָ��ռ��ͷ�ʹ��NULL
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	p = NULL;
//	*p = 10;//�������쳣: д�����Ȩ�޳�ͻ
//}

/*********ָ������**************/

//int main()//��ӡ1��10
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d",*p);
//		p++;//ָ������
//	}
//}

//int main()//��ӡ1��3��5��7��9
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = (sizeof(arr) / sizeof(arr[0]))/2;
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d", *p);
//		p+=2;//ָ������
//	}
//}

//int main()//��ӡ10��8��6��4��2
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = (sizeof(arr) / sizeof(arr[0])) / 2;
//	int* p =& arr[9];
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d", *p);
//		p -= 2;//ָ������
//	}
//}

//int main()//ָ���ȥָ��õ�����Ԫ��֮��ĸ���
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	char ch[5] = {0};
//	printf("%d\n",arr[9]-arr[0]);//9
//	printf("%d\n", arr[0] - arr[9]);//-9
//	printf("%d\n",arr[9]-ch[5]);//�����ȷ����ָ���ָ��õ�����Ԫ��֮ǰ�ĸ�����ǰ��������ָ����ͬһ���ڴ�ռ�
//}

/***********ʹ��ָ������ַ�������ĳ���****************/
//int my_strlen(char * str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end!='\0')//��end���ָ����洢�ĵ�ַ��ָ�����ֵ��Ϊ'\0'ʱ
//	{
//		end++;//���str�ĵ�ַ��ֵ+1��char���͵�ָ�������С��ֵ
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

/*********�����ַ��������Ԫ�ص�ַ**************/
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n",arr);//��Ԫ�ص�ַ
//	printf("%p\n", arr + 1);//����һ����4
//
//	printf("%p\n",&arr[0]);//��Ԫ�ص�ַ
//	printf("%p\n", &arr[0]+1);//����һ����4
//
//	printf("%p\n",&arr);//��������ĵ�ַ
//	printf("%p\n", &arr+1);//����һ����40
//
//}

//int main()//ʹ��ָ��ķ�ʽ������������Ԫ��
//{
//	int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	for (i=0;i<10;i++)
//	{
//		printf("%p  ==== %p\n",p+i,&arr[i]);//��������ȫһ��
//	}
//
//	/*********���Ĳ���ӡ����************/
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	/*********��һ�ִ�ӡ��ʽ************/
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p+i));
//
//	}
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//һ��ָ��
//	int** pa = &p;//����ָ��
//	printf("%d ",**pa);
//	**pa = 20;//ͨ������ָ���޸ı���ֵ
//	printf("%d ", a);
//}


/***********ָ������������ָ��**************/
//ָ������ı���������-���ָ�������
//����ָ��ı�����ָ��-
int main()
{
	int a = 10, b = 20, c = 30;
	int* arr[3] = {&a,&b,&c};//ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ",*(arr[i]));
	}
}