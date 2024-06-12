#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("***************************************\n");
	printf("********  1.play   0.exit *************\n");
	printf("***************************************\n");
}

void game()
{
	char ret = 0;
	//创建棋盘
	char board[ROW][COL] = {0};//所有的元素都是空格
	//初始化棋盘
	InitBoard(board,ROW, COL);
	//打印棋盘
	
	//打印效果
	//	   |   |
	//	---|---|---
	//	---|---|---
	//	   |   |

	DisplayBoard(board,ROW,COL);
	//下棋开始
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}

	if (ret=='*')
	{
		printf("玩家胜利");
	}
	else if (ret == '#')
	{
		printf("电脑胜利");
	}
	else
	{
		printf("平局");
	}
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	//如果把input的定义放在do-while语句中 那么其作用域将限定在 do 语句的代码块内部
	//这意味着在 while 语句中无法访问到 input 变量，因此会导致编译错误。
	do
	{

		menu();
		printf("请选择:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;

		case 0:
			printf("退出游戏\n");
			break;

		default:
			printf("输入错误，请重新选择\n");
			break;

		}


	} while (input);

	

}

int main()
{
	test();

}

