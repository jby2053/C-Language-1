#define _CRT_SECUER_NO_WARNINGS
#include <stdio.h>

#define BUFFER_SIZE 10000
// 사이즈 크기를 크게 만들기
// 값을 미리 저장

void LoadFile(const char* filename)
{
	// data. txt 파일을 열어주고 "r" (읽기) 모드로 설정합니다.
	FILE* file = fopen("Image/grandmama.txt", "r");
	// 읽어주는 파일 이름을 제대로 작성해줘야 합니다.
	// 텍스트 이름은 영어로 작성 해줘야 합니다. 
	// 이미지 경로에 grandmama 텍스트 열기

	// 값 정할수 있음
	char buffer[BUFFER_SIZE] = { 0, };
	// 0으로 초기화 시키기 
	// 오른쪽은 0으로 초기화 

	fread(buffer, 1, BUFFER_SIZE, file); // 전체 파일을 읽어주는 함수

	printf("%s", buffer);

	fclose(file);



}

int main()
{
#pragma region 파일 쓰기

	// data. txt 파일을 생성하고 "w" (쓰기) 모드로 설정합니다.
	//FILE * file = fopen("data.txt", "w");

	//fputs("level 10", file);  

	//// 파일을 닫아줍니다.
	//fclose(file); 

#pragma endregion

#pragma region 파일 이어 쓰기

	// data. txt 파일을 생성하고 "a" (이어쓰기) 모드로 설정합니다.
	//FILE * file = fopen("data.txt", "w");

	//fputs("\nHP 100", file);  

	//// 파일을 닫아줍니다.
	//fclose(file); 

#pragma endregion

#pragma region 파일 읽기
	
	LoadFile("Image/Grandmama.txt");

#pragma endregion



	return 0;
}
