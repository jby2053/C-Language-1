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
	// x, y 좌표 설정
	COORD position = { x,y };

	// 커서 이동 함수
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
	// 0 : 빈 공간 ("  ") <--두 칸 띄우기
	// 1 : 벽 (▤)
	// 2 : 탈출구 (♥)
	strcpy(maze[0], "1111111111");
	strcpy(maze[1], "1100001112");
	strcpy(maze[2], "1100000011");
	strcpy(maze[3], "1001110001");
	strcpy(maze[4], "2001111001");
	strcpy(maze[5], "1100110011");
	strcpy(maze[6], "1110110011");
	strcpy(maze[7], "1100111001");
	strcpy(maze[8], "1100000011");
	strcpy(maze[9], "1111001111");
	strcpy(maze[10], "1111001111");

}

void keyboard(char map[WIDTH][HEIGHT], Player* player)
{
	char key = 0;

	if (_kbhit()) // 키보드 입력 확인 (true/false)
	{
		key = _getch(); // key 입력을 받아주는 함수

		if (key == -32)
		{
			key = _getch();
		}

		switch (key)
		{
		case up: if (maze[player->y - 1][player->x / 2] != '1') { player->y--; }
			   break;

		case LEFT:  if (maze[player->y][player->x / 2 - 1] != '1') { player->x -= 2; }
				 break;

		case RIGHT: if (maze[player->y][player->x / 2 + 1] != '1') { player->x += 2; }
				  break;

		case DOWN: if (maze[player->y + 1][player->x / 2] != '1') { player->y++; }
				 break;

				 //default: printf("key 변수의 값 : %d\n", key);
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
				printf("▤");
			}
			else if (maze[i][j] == '2')
			{
				printf("♥");
			}

		}

		printf("\n");

	}
}


int main()
{
	//Player player  = { 3, 2, "＠" };

	//// 1. 맵 데이터를 생성합니다.
	//CreatMaze();

	//while (1)
	//{

	//	// 2. 맵 데이터에 있는 정보를 토대로 출력합니다.
	//	Render();

	//	keyboard(maze, &player);


	//	GotoXY(player.x, player.y);
	//	printf("%s", player.shape);


	//	Sleep(100);
	//	system("cls");
	//	
}

return 0;


}
