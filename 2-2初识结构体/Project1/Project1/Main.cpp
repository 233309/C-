#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

/********ָ��Ķ���ͳ�ʼ��**********/
//�ṹ������ĵ�һ�ֶ��巽ʽ
//struct-�ṹ��ؼ���  Stu-�ṹ���ǩ  struct Stu-�ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//����ȫ�ֵĽṹ�����
//
//
////�ṹ������ĵڶ��ֶ��巽ʽ
//typedef struct Stu1 
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu1;//��struct Stu1������͵Ľṹ���������ΪStu1
//
//int main()
//{
//	struct Stu s;//�ֲ�����
//	Stu1 s4 = {"��˹",45,"11223322","��"};//��ʼ��
//}

/**********�����ṹ��Ľṹ����γ�ʼ���ʹ�ӡ************/

//struct s 
//{
//	int a;
//	char b;
//	char arr[20];
//	double d;
//};
//
//struct t 
//{
//	char ch[20];
//	struct s s1;
//	char* p;
//};
//
//int main()
//{
//	char arr[] = "GAMEOVER";
//	struct t t1 = { "haha",{100,'r',"haha",0.11},arr};
//	printf("%s\n",t1.ch);
//	printf("%d\n", t1.s1.a);
//	printf("%c\n", t1.s1.b);
//	printf("%s\n", t1.s1.arr);
//	printf("%lf\n", t1.s1.d);
//	printf("%s\n", t1.p);
//}

/************ʹ�õ�ַ��ӡ�ṹ��****************/

//struct Stu  
//{
//	char nam[20];
//	short age;
//	char sex[10];
//	long long int tele;
//}stu1;
//
//void Print1(Stu temp)//���δ�ӡ
//{
//	printf("name:%s\n",stu1.nam);
//	printf("age:%d\n",stu1.age);
//	printf("sex:%s\n",stu1.sex);
//	printf("telephone:%d\n",stu1.tele);
//}
//
//void Print2(Stu* p)//��ַ��ӡ
//{
//	printf("name:%s\n",p->nam);//->����Խṹ��ָ��Ľ�ָ��ָ��ı�����ӡ����
//	printf("age:%d\n", p->age);
//	printf("sex:%s\n", p->sex);
//	printf("telephone:%d\n", p->tele);
//
//}
//
//int main()
//{
//	stu1 = { "����",20,"��",18351588186 };
//	Print1(stu1);
//	Print2(&stu1);//�ṹ�崫�ε�ʱ����ô��ṹ��ַ
//}