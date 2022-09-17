#pragma once
/*
* 文档参考
* https://docs.microsoft.com/zh-cn/windows/win32/inputdev/virtual-key-codes
* 目的为快速地获取键盘的某个或者任意组合键的状态
*/
#include"./keyBoard.h"

extern void keyBoardAsyncKeyState(KeyBoard* key_board);
//每次获取当前键盘所有的按键状态
//使用时找到对应的键即可