#define _CRT_SECUER_NO_WARNINGS
#include <stdio.h>
#include <conio.h>   // 좌표이동을 할 수 있도록 도와주는 헤더파일
#include <windows.h> // Coordinate


#define up 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void GotoXY(int x, int y)
{
	// x, y 좌표 설정
	COORD position = { x,y };
	
	// 커서 이동 함수
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

}


int main()
{
	char key = 0;
	int x = 2;
	int y = 5;

	GotoXY(x, y);
	printf("☆");

	while (1)
	{
		system("cls");
		GotoXY(x, y);
		printf("☆");
		
		if (_kbhit()) // 키보드 입력 확인 (true/false)
		{
			key = _getch(); // key 입력을 받아주는 함수

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
			//default: printf("key 변수의 값 : %d\n", key);
			//break;
			}

		}      
	}

	return 0;
}
