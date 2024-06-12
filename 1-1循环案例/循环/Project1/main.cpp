#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//求有序数列的最大值(finish)
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

//打印99乘法口诀表(fn)
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
//			//printf("%dx%d=%2d", column, row,row*column);//%2d中的2是表明打印这个字符时占用两个位置，不够两位时用空格补齐
//			printf("%dx%d=%-2d", column, row, row * column);//%-2d则是表示向前靠
//			printf("%*s", 1, "");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//二分查找(finish)
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
//			//max与min产生的作用就是确定mid的大小
//			int mid = (max + min)/2;// 2
//			if (arr[mid] > num)//when input>mid
//			{
//				max = mid-1;//确认新的最小值，新的最小值在初始中值的右边，所以++
//			}
//
//			else if (arr[mid] < num)
//			{
//				min = mid + 1;//确认新的最大值，新的最小值在初始中值的右边，所以--
//
//			}
//			else
//			{
//				printf("找到了，数字是%d", arr[mid]);
//				break;
//			}
//
//			
//
//		}
//
//		if (max < min)
//		{
//			printf("您要找的数字不存在");
//		}
//	}
//}




////无序数列有序排列,冒泡排序法；
//int main()
//{
//	int temp, count,num,input;
//	int arr[100];
//
//	printf("请输入你要输入的数字的个数");
//	scanf("%d", &count);//Determines the number of digits in the array
//
//	printf("请输入数字");
//	for (input = 0; input < count; input++)//enter the number
//	{
//		scanf("%d", &arr[input]);
//	}
//
//	// 冒泡排序算法，从小到大排序数组中的数字
//	for (input = 0; input< count - 1; input++)//n个数字上下比较，若上面的数字大于下面的数字则交换值，要进行n-1次
//	{
//		for (num=0;num<count-input-1;num++)//需要比较的次数是逐次减少的
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

//猜数字游戏,

#include<stdlib.h>
#include<time.h>

void menu()
{
	//开局界面
	printf("***********************************\n");
	printf("*****  1.好  ***  0.不玩了  *******\n");
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
		printf("请输入你猜测的数字");
		scanf("%d", &guess);

		if (guess > chage)
		{
			printf("大了\n");
			
		}
		else if (guess < chage)
		{
			printf("小了\n");
			
		}
		else
		{
			printf("猜对了\n");
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
		printf("请输入");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;

		case 0:
				printf("推出游戏");
				break;

		default:
			printf("选择错误");
			break;

		}
		
			
	} 
	while (input);
	
}










