#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//���������е����ֵ(finish)
//int main()
//{
//	int ser[] = { 9,6,7,8,5,2,4,1,3 };//define series
//	int max = ser[0];//tentative maximum value of the sequence
//	int num = 0;//serial number of sequence
//	int sz = sizeof(ser) / sizeof(ser[0]);//the number of numbers in sequence
//	//calling one by one
//	for (num = 0; num < sz; num++)//stop when all value in the array has been called
//	{
//		if (ser[num] > max)//when ser_number >max 
//		{
//			max = ser[num]; //change the value of max
//		}
//	}
//	printf("%d", max);
//
//	
//
//}

//��ӡ99�˷��ھ���(fn)
//1*1=1
//2*1=2 2*2=4
//3*1=1 3*2=2 3*3+9
//int main()
//{
//	int row = 0, column = 0;//difine line and column
//
//	for (column = 1; column <= 9; column++)//print 9 column
//	{
//		for (row = 1; row <= column; row++)//print correspond row 
//		{
//			//printf("%dx%d=%2d", column, row,row*column);//%2d�е�2�Ǳ�����ӡ����ַ�ʱռ������λ�ã�������λʱ�ÿո���
//			printf("%dx%d=%-2d", column, row, row * column);//%-2d���Ǳ�ʾ��ǰ��
//			printf("%*s", 1, "");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//���ֲ���(finish)
//int main()
//{
//	int arr[] = {1,2,3,5,7,8,9};//define array
//	int num = 7;//target number
//	int sz = sizeof(arr) / sizeof(arr[0]);//caculate the number of seqeunce
//	int max = sz - 1, min = 0;//affirm subscript of max min
//	{
//	
//		while (max >= min)//sure number is value
//		{
//			//max��min���������þ���ȷ��mid�Ĵ�С
//			int mid = (max + min)/2;// 2
//			if (arr[mid] > num)//when input>mid
//			{
//				max = mid-1;//ȷ���µ���Сֵ���µ���Сֵ�ڳ�ʼ��ֵ���ұߣ�����++
//			}
//
//			else if (arr[mid] < num)
//			{
//				min = mid + 1;//ȷ���µ����ֵ���µ���Сֵ�ڳ�ʼ��ֵ���ұߣ�����--
//
//			}
//			else
//			{
//				printf("�ҵ��ˣ�������%d", arr[mid]);
//				break;
//			}
//
//			
//
//		}
//
//		if (max < min)
//		{
//			printf("��Ҫ�ҵ����ֲ�����");
//		}
//	}
//}




////����������������,ð�����򷨣�
//int main()
//{
//	int temp, count,num,input;
//	int arr[100];
//
//	printf("��������Ҫ��������ֵĸ���");
//	scanf("%d", &count);//Determines the number of digits in the array
//
//	printf("����������");
//	for (input = 0; input < count; input++)//enter the number
//	{
//		scanf("%d", &arr[input]);
//	}
//
//	// ð�������㷨����С�������������е�����
//	for (input = 0; input< count - 1; input++)//n���������±Ƚϣ�����������ִ�������������򽻻�ֵ��Ҫ����n-1��
//	{
//		for (num=0;num<count-input-1;num++)//��Ҫ�ȽϵĴ�������μ��ٵ�
//		{
//			if (arr[num] > arr[num + 1])//
//			{
//				temp = arr[num];
//				arr[num] = arr[num+1];
//				arr[num+1] = temp;
//
//			}
//		}
//
//       
//	}
//
//	for (input = 0; input< count; input++)
//	{
//		printf("%d  ", arr[input]);
//		
//	}
//}

//��������Ϸ,

#include<stdlib.h>
#include<time.h>

void menu()
{
	//���ֽ���
	printf("***********************************\n");
	printf("*****  1.��  ***  0.������  *******\n");
	printf("***********************************\n");


}

void game()
{
	int guess = 0;
	int chage = 0;

	//produce randomm number
	
	chage = rand()%100;
	
	while (1)//guess number
	{
		printf("��������²������");
		scanf("%d", &guess);

		if (guess > chage)
		{
			printf("����\n");
			
		}
		else if (guess < chage)
		{
			printf("С��\n");
			
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	
	do
	{
		menu();
		printf("������");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;

		case 0:
				printf("�Ƴ���Ϸ");
				break;

		default:
			printf("ѡ�����");
			break;

		}
		
			
	} 
	while (input);
	
}










