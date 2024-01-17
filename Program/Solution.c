#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

#define up 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

#define WIDTH 11
#define HEIGHT 11

char maze[WIDTH][HEIGHT];




void GotoXY(int x, int y)
{
	// x, y ��ǥ ����
	COORD position = { x,y };

	// Ŀ�� �̵� �Լ�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

}

typedef struct Player
{
	int x;
	int y;
	const char* shape;

}Player;

void CreatMaze()
{
	// 0 : �� ���� ("  ") <--�� ĭ ����
	// 1 : �� (��)
	// 2 : Ż�ⱸ (��)
	strcpy(maze[0],  "1111111111");
	strcpy(maze[1],  "1100001100");
	strcpy(maze[2],  "1100000011");
	strcpy(maze[3],  "1001110001");
	strcpy(maze[4],  "0001111001");
	strcpy(maze[5],  "1100110011");
	strcpy(maze[6],  "1110110011");
	strcpy(maze[7],  "1100111001");
	strcpy(maze[8],  "1100000011");
	strcpy(maze[9],  "1111001111");
	strcpy(maze[10], "1111001111");

}

void keyboard(char map[WIDTH][HEIGHT],Player * player)
{
	char key = 0;
	
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

			case LEFT:if (x > 0) { x -= 2;}
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





void Render()
{
	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			if (maze[i][j] == '0')
			{
				printf("  ");
			}
			else if (maze[i][j] == '1')
			{
				printf("��");
			}
			else if (maze[i][j] == '2')
			{
				printf("��");
			}
					
		}

		printf("\n");

	}
}


int main()
{
	Player player  = { 3, 3, "��" };

	// 1. �� �����͸� �����մϴ�.
	CreatMaze();

	while (1)
	{

		// 2. �� �����Ϳ� �ִ� ������ ���� ����մϴ�.
		Render();

		GotoXY(player.x, player.y);
		printf("%s", player.shape);


		Sleep(5000);
		system("cls");
		
	}
	 
 	return 0;
}
