#include "pch.h"
#include<stdio.h>
#include<iostream>

using namespace System;
using namespace std;
using namespace System::Threading;

struct bapu
{
	int x;
	int y;
};
bapu p1 = { 4,4 }; bapu p2 = { 8,8 }; bapu p3 = { 12,12 };
void show(bapu* p)
{
	Console::SetCursorPosition(p->x, p->y);
	putchar('*');
}
void hide(bapu* p)
{
	Console::SetCursorPosition(p->x, p->y);
	putchar(' ');
}
void move(bapu* p, float a, float b)
{
	p->x = a;
	p->y = b;
}
int x = 10;
int y = 10;
void sleepingline(int x, int y)
{
	for (int i = 0; i < 7; i++)
	{
		Console::SetCursorPosition(x + i, y);
		putchar('*');
	}

}
void standingline(int x, int y)
{
	for (int i = 0; i < 5; i++)
	{
		Console::SetCursorPosition(x, y + i);
		putchar('*');
	}

}
void slantingline1(int x, int y)
{
	for (int i = 0; i < 5; i++)
	{
		Console::SetCursorPosition(x + i, y + i);
		putchar('*');
	}

}
void slantingline2(int x, int y)
{
	for (int i = 0; i < 5; i++)
	{
		Console::SetCursorPosition(x - i, y + i);
		putchar('*');
	}

}
void hand1(int x, int y, int w)
{

	for (int i = 0; i < 3; i++)
	{
		Console::SetCursorPosition(x + i, y + i);
		if (w == 1)
		{
			putchar('*');
		}
		else if (w == 0)
		{
			putchar(' ');
		}
	}

}
void hand2(int x, int y, int w)
{
	for (int i = 0; i < 3; i++)
	{
		Console::SetCursorPosition(x - i, y + i);
		if (w == 1)
		{
			putchar('*');
		}
		else if (w == 0)
		{
			putchar(' ');
		}
	}

}
void box()
{
	for (int j = 0; j < 15; j = j + 3)
	{
		standingline(10 + j, 10);
		sleepingline(10 + j, 10);
		sleepingline(10 + j, 14);
		standingline(16 + j, 10);
		standingline(13 + j, 15);
		slantingline1(14 + j, 20);
		slantingline2(12 + j, 20);
		sleepingline(7 + j, 17);
		sleepingline(14 + j, 17);
		for (int i = 0; i < 2; i++)
		{
			hand1(5 + j, 15, 1);
			hand1(20 + j, 17, 1);
			Thread::Sleep(500);
			Console::Beep(600, 500);
			hand1(5 + j, 15, 0);
			hand1(20 + j, 17, 0);
			Thread::Sleep(50);
			hand2(7 + j, 17, 1);
			hand2(22 + j, 15, 1);
			Thread::Sleep(500);
			Console::Beep(1800, 500);
			hand2(7 + j, 17, 0);
			hand2(22 + j, 15, 0);
			Thread::Sleep(10);
		}
		hand1(5 + j, 15, 1);
		hand1(20 + j, 17, 1);
		Console::Clear();
	}
}

int main()
{
	Console::Clear();
	Console::ReadLine();
	box();
	/*for (int j = 0; j < 15; j+=3)
	{
		show(&p1); show(&p2); show(&p3);
		Thread::Sleep(1000);
		hide(&p1); hide(&p2); hide(&p3);
		move(&p1, 6.5+j, 6.5+j);
		move(&p2, 10.5+j, 10.5+j);
		move(&p3, 14.5+j, 14.5+j);
	}
	show(&p1); show(&p2); show(&p3);
	Thread::Sleep(1000);
	*/
	Console::SetCursorPosition(27, 27);
	return 0;
}
