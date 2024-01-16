#define _CRT_SECUER_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define WIDTH 11
#define HEIGHT 11

char maze[WIDTH][HEIGHT];

void CreatMaze()
{
	// 0 : ºó °ø°£ (" ")
	// 1 : º® (¢Æ)
	// 2 : Å»Ãâ±¸ (¢¾)
	strcpy(maze[0],  "1111100011");
	strcpy(maze[1],  "1111000111");
	strcpy(maze[2],  "1100010011");
	strcpy(maze[3],  "1001111001");
	strcpy(maze[4],  "0011111100");
	strcpy(maze[5],  "1100110011");
	strcpy(maze[6],  "1110110111");
	strcpy(maze[7],  "1100111001");
	strcpy(maze[8],  "1100000011");
	strcpy(maze[9],  "1111001111");
	strcpy(maze[10], "1111001111");

}

void Render()
{

}


int main()
{

 	return 0;
}
