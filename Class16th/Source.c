#define _CRT_SECUER_NO_WARNINGS
#include <stdio.h>

#define BUFFER_SIZE 10000
// ������ ũ�⸦ ũ�� �����
// ���� �̸� ����

void LoadFile(const char* filename)
{
	// data. txt ������ �����ְ� "r" (�б�) ���� �����մϴ�.
	FILE* file = fopen("Image/grandmama.txt", "r");
	// �о��ִ� ���� �̸��� ����� �ۼ������ �մϴ�.
	// �ؽ�Ʈ �̸��� ����� �ۼ� ����� �մϴ�. 
	// �̹��� ��ο� grandmama �ؽ�Ʈ ����

	// �� ���Ҽ� ����
	char buffer[BUFFER_SIZE] = { 0, };
	// 0���� �ʱ�ȭ ��Ű�� 
	// �������� 0���� �ʱ�ȭ 

	fread(buffer, 1, BUFFER_SIZE, file); // ��ü ������ �о��ִ� �Լ�

	printf("%s", buffer);

	fclose(file);



}

int main()
{
#pragma region ���� ����

	// data. txt ������ �����ϰ� "w" (����) ���� �����մϴ�.
	//FILE * file = fopen("data.txt", "w");

	//fputs("level 10", file);  

	//// ������ �ݾ��ݴϴ�.
	//fclose(file); 

#pragma endregion

#pragma region ���� �̾� ����

	// data. txt ������ �����ϰ� "a" (�̾��) ���� �����մϴ�.
	//FILE * file = fopen("data.txt", "w");

	//fputs("\nHP 100", file);  

	//// ������ �ݾ��ݴϴ�.
	//fclose(file); 

#pragma endregion

#pragma region ���� �б�
	
	LoadFile("Image/Grandmama.txt");

#pragma endregion



	return 0;
}
