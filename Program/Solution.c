#define _CRT_SECUER_NO_WARNINGS
#include <stdio.h>
#include <conio.h>   // ��ǥ�̵��� �� �� �ֵ��� �����ִ� �������
#include <windows.h> // Coordinate


#define up 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void GotoXY(int x, int y)
{
	// x, y ��ǥ ����
	COORD position = { x,y };
	
	// Ŀ�� �̵� �Լ�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

}


int main()
{
	char key = 0;
	int x = 2;
	int y = 5;

	GotoXY(x, y);
	printf("��");

	while (1)
	{
		system("cls");
		GotoXY(x, y);
		printf("��");
		
		if (_kbhit()) // Ű���� �Է� Ȯ�� (true/false)
		{
			key = _getch(); // key �Է��� �޾��ִ� �Լ�

			if (key == -32)
			{
				key = _getch();
			}

			switch (key)
			{
			case up: if (y > 0) { y--; }
				break;
			case LEFT :
				if (x > 0)
				{
					x -= 2;
				}
				break;
			case RIGHT: x += 2;
				break;
			case DOWN: y++;
				break;
			//default: printf("key ������ �� : %d\n", key);
			//break;
			}

		}      
	}

	return 0;
}
