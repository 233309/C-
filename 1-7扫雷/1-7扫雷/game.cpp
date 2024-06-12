#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i, j;

	for (i = 0; i < cols; i++)//����
	{
		for (j = 0; j < rows; j++)//����
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
	//�ַ�'1'-�ַ�'0'���õ�����ֵ��1����ϸ��ASCLL���,
    //[x][y]�ܱ���8���ַ������е��ַ���������ȥ8���ַ�'0'�õ�����ֵ�����ܱߵ��׵�����
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	int win =0;
	while (win<row*col- EASY_COUNT)
	{
		printf("����������->");
		scanf("%d %d",&x,&y);
		if (x>0 && x<=row && y>0 && y<=col)//�ж���������Խ��
		{
			if (mine[x][y] == '0')//�ж������Ƿ�����
			{
				//�����ܱ��׵ĸ���
				int count = get_mine(mine,x,y);
				show[x][y] = count + '0';//���ַ�'0'+��ֵ=����ֵ���ַ���ʽ���ֳ���
				DisPlayBoard(show, row, col);
			}
			else
			{
				printf("��µ�����\n");
				DisPlayBoard(mine, row, col);
				break;
			}
		}
		else
		{
			printf("������� ����������\n");
		}
	}
	if (win = row * col - EASY_COUNT)
	{
		printf("��ϲ�� ʤ����\n");
	}
}