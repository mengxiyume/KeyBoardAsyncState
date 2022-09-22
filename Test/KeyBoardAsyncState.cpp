#define _CRT_SECURE_NO_WARNINGS 1

#include"./KeyBordAsyncState.h"
#include<Windows.h>
#include<stdio.h>

#define MAX_KEY_VALUE 0xFF
#define DEBUG

#undef DEBUG

void keyBoardAsyncKeyState(KeyBoard* key_board, KeyBoard* open_key)
{
	int i = 0;
	for (i = 0; i <= MAX_KEY_VALUE; i++)
	{
		if (((bool*)open_key)[i])
		{
			if (GetAsyncKeyState(i))
			{
#ifdef DEBUG
				printf("%02X\n", i);
#endif
				((bool*)key_board)[i] = true;
			}
			else
			{
				((bool*)key_board)[i] = false;
			}
		}
	}
}