#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//*******************simplistic recursion***************//
//int main()
//{
//	printf("hehe\n");
//	main();
//}

//*******************���������ְ�λȨ�ֿ�***********************//

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

//**************���ַ�������******************//

//#include<string.h>
//
//int main()
//{
//	char arr[] = "holle";
//	int len = strlen(arr);
//	printf("%d", len);
//}

//*****************�����Զ��庯�����ַ�������***********//

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

//*****************��������ʱ�������ַ�������***********//

//int my_strlen(char* str)
///*har* str����һ����������������ʾstr��һ��ָ���ַ���char���������ݵ�ָ�롣
//   str���Դ洢һ���ַ��ĵ�ַ������ָ��һ���ַ����飨�ַ��������׵�ַ��*/
///*str������һ����������������������ʾһ��ָ���ַ���ָ�룬Ҳ���Ա�ʾָ���ַ����飨�ַ��������׵�ַ��*/			
//{
//	/**str��C��������ָ������õĲ���������ʾ��ȡָ��str��ָ���ֵ��
//    ��str��һ��ָ���ַ���char�����͵�ָ��ʱ��*str��ʾ��ȡָ����ָ����ַ�ֵ��*/
//	if(*str != '\0')//*strȡ
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

/*�ݹ������*/

/*************��n�Ľ׳�*******************/

////һ�㷽��
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

////�ݹ鷽��
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
//	//����������ֵ
//	int ret = 0;
//	int input = 0;
//	scanf("%d", &input);
//
//	//�Զ��庯������
//	//ret = Fac1(input);
//	ret = Fac2(input);
//	printf("%d",ret);
//
//
//}

/*************���n�����ֵķѲ���ϵ��*****************/

////�Եݹ�ķ�ʽд
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

////��ѭ���ķ�ʽд
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
//	//ʹ��bor����
//	ret = bor(input);
//	printf("%d", ret);
//	return 0;
//}