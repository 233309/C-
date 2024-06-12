#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

/********指针的定义和初始化**********/
//结构体变量的第一种定义方式
//struct-结构体关键字  Stu-结构体标签  struct Stu-结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//三个全局的结构体变量
//
//
////结构体变量的第二种定义方式
//typedef struct Stu1 
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu1;//将struct Stu1这个类型的结构体变量定义为Stu1
//
//int main()
//{
//	struct Stu s;//局部变量
//	Stu1 s4 = {"李斯",45,"11223322","男"};//初始化
//}

/**********包含结构体的结构体如何初始化和打印************/

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

/************使用地址打印结构体****************/

//struct Stu  
//{
//	char nam[20];
//	short age;
//	char sex[10];
//	long long int tele;
//}stu1;
//
//void Print1(Stu temp)//传参打印
//{
//	printf("name:%s\n",stu1.nam);
//	printf("age:%d\n",stu1.age);
//	printf("sex:%s\n",stu1.sex);
//	printf("telephone:%d\n",stu1.tele);
//}
//
//void Print2(Stu* p)//传址打印
//{
//	printf("name:%s\n",p->nam);//->是针对结构体指针的将指针指向的变量打印出来
//	printf("age:%d\n", p->age);
//	printf("sex:%s\n", p->sex);
//	printf("telephone:%d\n", p->tele);
//
//}
//
//int main()
//{
//	stu1 = { "张三",20,"男",18351588186 };
//	Print1(stu1);
//	Print2(&stu1);//结构体传参的时候，最好传结构地址
//}