#define _CRT_SECURE_NO_WARNINGS



#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)//���̳�ʼ��
{
	int i = 0;
	int j = 0;
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			board[i][j] = ' ';
			/*  ' '����ʾһ���ַ������ո��ַ������ڴ��У��ո��ַ��ᱻ�洢Ϊһ���ֽڡ�
             " "����ʾһ���ַ��������ɿո��ַ���ɵ��ַ��������ڴ��У��ַ��������ַ��������ʽ�洢��
	          ���Կ��ַ� '\0' ��β��*/
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{

	//�̶���ӡ�������еķ�ʽ
	//int i = 0;
	//for (i=0;i<row;i++)
	//{
	//	//��ӡһ�е�����
	//	printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
	//	//��ӡ�ָ���
	//	if(i<row-1)
	//	printf("---|---|---\n");

	//}


	//ͨ���ı�ͷ�ļ�����COL ROW �ı����������������ķ�ʽ
	int i, j;
	for (i = 0; i < row; i++)//��ӡ����
	{
		for (j = 0; j < col; j++)//��ӡ����
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
	printf("�����:>\n");
	while (1)
	{
		printf("��������������;>");
		scanf("%d%d",&x,&y);
		//�ж���������ĺϷ���
		if (x>=1 && x<=row && y>=1 && y<=col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;//���һ������������ѭ��
			}
			else
			{
				printf("�����ѱ�ռ��\n");
			}
		}
		else
		{
			printf("�������!\n");
		}
	}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("������;>\n");

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
				return 0;//û��
		}
	}
	return 1;//����
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�жϺ��ŵ�����
	for (i=0;i<row;i++)
	{
		if (board[0][i]==board[1][i] &&  board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}

	//�ж����ŵ�����
	for (i = 0; i < col; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[0][i];
		}
	}

	//�ж�б�ŵ�����
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}

	//�ж��Ƿ�ƽ��
	if (1 == IsFull(board,ROW,COL))
	{
		return 'Q';
	}

	return 'C';
}