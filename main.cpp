#define _CRT_SECURE_NO_WARNINGS 1

#include"Include/KeyBoardAsyncState.h"
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{
	int i = 0;
	KeyBoard* key1 =(KeyBoard*)calloc(1, sizeof(KeyBoard));
	if (!key1)
	{
		perror("");
		return NULL;
	}

	while (1)
	{
		Sleep(100);
		system("cls");
		keyBoardAsyncKeyState(key1);
		for (i = 0; i <= MAX_KEY_VALUE; i++)
		{
			if (((bool*)key1)[i])
			{
				printf("%02X ", i);
			}
		}

	}

	//printf("%02d\n", (int)sizeof(KeyBoard));

	//vivo 50 eat KFC

	return 0;
}