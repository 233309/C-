#define _CRT_SECURE_NO_WARNINGS



#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)//棋盘初始化
{
	int i = 0;
	int j = 0;
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			board[i][j] = ' ';
			/*  ' '：表示一个字符，即空格字符。在内存中，空格字符会被存储为一个字节。
             " "：表示一个字符串，即由空格字符组成的字符串。在内存中，字符串会以字符数组的形式存储，
	          并以空字符 '\0' 结尾。*/
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{

	//固定打印三行三列的方式
	//int i = 0;
	//for (i=0;i<row;i++)
	//{
	//	//打印一行的数据
	//	printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
	//	//打印分割行
	//	if(i<row-1)
	//	printf("---|---|---\n");

	//}


	//通过改变头文件变量COL ROW 改变棋盘行数与列数的方式
	int i, j;
	for (i = 0; i < row; i++)//打印行数
	{
		for (j = 0; j < col; j++)//打印列数
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");

		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
		
	}

}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入下棋坐标;>");
		scanf("%d%d",&x,&y);
		//判断输入坐标的合法性
		if (x>=1 && x<=row && y>=1 && y<=col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;//如果一切正常就跳出循环
			}
			else
			{
				printf("坐标已被占用\n");
			}
		}
		else
		{
			printf("输入错误!\n");
		}
	}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("电脑走;>\n");

	while (1)
	{
		x = rand() % row;
		y=  rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}

	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i,j;
	for (i=0;i<row;i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//没满
		}
	}
	return 1;//满了
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断横着的三行
	for (i=0;i<row;i++)
	{
		if (board[0][i]==board[1][i] &&  board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}

	//判断竖着的三列
	for (i = 0; i < col; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[0][i];
		}
	}

	//判断斜着的三列
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}

	//判断是否平局
	if (1 == IsFull(board,ROW,COL))
	{
		return 'Q';
	}

	return 'C';
}