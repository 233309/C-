#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	{
//		int a = 10;//�������
//	}
//	printf("%d\n",a);//�޷�����
//}

/********����һ�����α��� ��ֵ������ ���Ҳ���һ��************/
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

/********������������֮���Ԫ��*******/
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

/**********���ʲô���Ľ��***********/
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//ǿ��ת��
//	int i = 0;
//	for (i=0;i<4;i++)
//	{
//		*(p+i) = 0;//������short���͵�ָ�������ÿ��ֻ�޸������ַ�
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d",arr[i]);
//	}
//}

//int main()
//{
//	int a = 0x11223344;//0x��ʾ16���ƣ�����11��22��33��44���ֱ�ռһ���ֽ�
//	char* pa = (char*)&a;
//	*pa = 0;//һ���ֽ���Ϊ0
//	printf("%x",a);
//}

/********��һ���������Ʊ�ʾʱ1�ĸ���(ֻ�ܼ����������汾)***********/
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

/********��һ���������Ʊ�ʾʱ1�ĸ���(���������汾)***********/
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

/********��һ���������Ʊ�ʾʱ1�ĸ���(���������汾-1�汾)***********/
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

/********��һ���������Ʊ�ʾʱ1�ĸ���(���������汾-2�汾)***********/
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

/*************��������int�����Ķ����������ж���λ��ͬ******************/
//int get_diff_bit(int m, int n)
//{
//	int temp = m^n;//m���n
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
//	printf("%d��%d��%d����ͬ�Ķ�����λ",m,n,count);
//}

/***********��ӡһ�������Ƶ�����λ��ż��λ***************/
//void print(int a)
//{
//	printf("��ӡ����λ");
//	int i = 0;
//	for (i=30;i>=0;i-=2)
//	{
//		printf("%d",(a>>i)&1);
//	}
//	printf("\n");
//	printf("��ӡż��λ");
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

/******�������������ӡ�˷���*******/
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

/**********��ʹ��ָ���c���ԵĿ⺯�������ַ������͵�����*************/
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
// /*temp���Ǹ���ʱ���������������һ��int������char���͵��ڴ����
// ����֤�ڴ湻�ã�����������ܰ�arr[x]��������һ��Ԫ�ؽ��ܵ�����*/
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

/**********��ʹ��ָ���c���ԵĿ⺯�������ַ������͵����� ʹ�õݹ�ķ���*************/
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

/*******�õݹ����һ�����򣬿��Լ���һ����ÿһλ�Ĵ�С**********/
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

/**********��дһ������ʵ��n��k�η�*************/
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