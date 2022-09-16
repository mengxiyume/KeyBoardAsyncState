#define _CRT_SECURE_NO_WARNINGS 1

#include"../Include/KeyBoardAsyncState.h"
#include<Windows.h>
#include<stdio.h>

#undef DEBUG

void keyBoardAsyncKeyState(KeyBoard* key_board)
{
	int i = 0;
	for (i = 0; i <= MAX_KEY_VALUE; i++)
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