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
	//��������
	char board[ROW][COL] = {0};//���е�Ԫ�ض��ǿո�
	//��ʼ������
	InitBoard(board,ROW, COL);
	//��ӡ����
	
	//��ӡЧ��
	//	   |   |
	//	---|---|---
	//	---|---|---
	//	   |   |

	DisplayBoard(board,ROW,COL);
	//���忪ʼ
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
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
		printf("���ʤ��");
	}
	else if (ret == '#')
	{
		printf("����ʤ��");
	}
	else
	{
		printf("ƽ��");
	}
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	//�����input�Ķ������do-while����� ��ô���������޶��� do ���Ĵ�����ڲ�
	//����ζ���� while ������޷����ʵ� input ��������˻ᵼ�±������
	do
	{

		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;

		case 0:
			printf("�˳���Ϸ\n");
			break;

		default:
			printf("�������������ѡ��\n");
			break;

		}


	} while (input);

	

}

int main()
{
	test();

}

