#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

////�ӷ�����
//
//int Add(int x, int y)
//{
//	int sum = 0;
//	sum = x + y;
//	return sum;
//}
//
//
//int main()
//{
//	int sum = 0;
//	int a = 4;
//	int b = 6;
//	sum=Add(a,b);
//	printf("%d", sum);
//}




//strcpy(string copy)������ʹ��
//
//#include<string.h>
//int main()
//{
//	char arr[] = "holle";
//	char arr1[20] = "**********";
//
//	strcpy(arr1,arr );
//
//	printf("%s", arr1);
//
//
//}

// memset (memory set)�洢����

//#include<string.h>
//
//int main()
//{
//	char arr[] = "holle world";
//	memset(arr, '*', 5);
//	printf("%s", arr);
//
//}

//��ַ����

//#include<string.h>
//void Wape(int* pa, int* pb)
//{
//	int temp = 0;
//	temp = *pb;
//	*pb = *pa;
//	*pa = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 30;
//
//	printf("a=%d,b=%d\n", a, b);
//
//	Wape(&a,&b);
//	printf("a=%d,b=%d\n", a, b);
//
//}

//����������

int Add(int a, int b);//��������

int main()
{
	int a = 10;
	int b = 30;
	int sum = 0;
	sum = Add(a, b);
	printf("%d", sum);//��������

}

int Add(int a, int b)//�����Ķ���
{
	int sum=0;
	sum = a + b;
	return sum;
}