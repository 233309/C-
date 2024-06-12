#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i, j;

	for (i = 0; i < cols; i++)//行数
	{
		for (j = 0; j < rows; j++)//列数
		{
			board[i][j] = set;
		}
		
	}
}


void DisPlayBoard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	for (i=0;i<col;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i < col; i++)
	{
		printf("%d", i);
		for (j = 1; j < row; j++)
		{
			printf(" %c",board[i][j]);
		}
		printf("\n");
	}
}


void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x, y;
		x = rand() % row + 1;//1-9
		
		y = rand() % col + 1;
		
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			
			
			count--;
		}
	}
}

int get_mine(char mine[ROWS][COLS], int x, int y)
{
	return
		mine[x + 1][y + 1] +
		mine[x + 1][y] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x][y - 1] +
		mine[x - 1][y + 1] - 8 * '0';
	//字符'1'-字符'0'所得到的数值是1（详细见ASCLL码表）,
    //[x][y]周边有8个字符把所有的字符加起来减去8个字符'0'得到的数值就是周边地雷的总数
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	int win =0;
	while (win<row*col- EASY_COUNT)
	{
		printf("请输入坐标->");
		scanf("%d %d",&x,&y);
		if (x>0 && x<=row && y>0 && y<=col)//判断坐标有无越界
		{
			if (mine[x][y] == '0')//判断坐标是否有雷
			{
				//计算周边雷的个数
				int count = get_mine(mine,x,y);
				show[x][y] = count + '0';//以字符'0'+数值=该数值以字符形式表现出来
				DisPlayBoard(show, row, col);
			}
			else
			{
				printf("你猜到雷了\n");
				DisPlayBoard(mine, row, col);
				break;
			}
		}
		else
		{
			printf("输入错误 请重新输入\n");
		}
	}
	if (win = row * col - EASY_COUNT)
	{
		printf("恭喜你 胜利了\n");
	}
}