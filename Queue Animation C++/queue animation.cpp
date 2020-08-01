#include "pch.h"
#include<iostream>

using namespace System;
using namespace std;

int q[10];
int last = -1;

int menu()
{
	int y;
	Console::Clear();
	Console::SetCursorPosition(10, 20);
	cout << endl;
	cout << "	welcome to interactive queue" << endl;
	cout << "	1.enqueue" << endl;
	cout << "	2.deueue" << endl;
	cout << "	3.print" << endl;
	cout << "	4.exit" << endl;
	cin >> y;
	return y;
}
void enqueue(int v) {
	if (last != 9)
	{
		last = last + 1;
		q[last] = v;
	}
	else
	{
		cout << "queue is full" << endl;
	}
}
int dequeue() {
	if (last != -1)
	{
		int temp = q[0];
		for (int i = 0; i < last; i++)
		{
			q[i] = q[i + 1];
		}
		last = last - 1;
		return temp;
	}
	else
	{
		cout << "stack is under flow" << endl;
	}
}
void print() {
	cout << endl << endl;
	for (int i = 0; i <= last; i++)
	{
		cout << "q[" << i << "]" << q[i] << endl;
	}
}

int main()
{
	Console::Clear();
	int x = menu();
	int a;
	Console::SetCursorPosition(10, 27);
	int i = 0;
	while (x != 4)
	{
		switch (x)
		{
		case 1:cout << "enqueue......." << endl;
			cout << "enter no" << endl;
			cin >> a;
			enqueue(a);
			i++;
			break;
		case 2:cout << "dequeue......." << endl;
			cout << dequeue()<<" is dequeued" << endl;
			break;
		case 3:cout << "print queue......." << endl;
			print();
			break;
		}
		int p = 0;
		if (x == 1||x==2||x==3)
		{
			for (int j = 0;j<=80;j=j+8)
			{
				for (int k = 0; k < 4; k++)
				{
					Console::SetCursorPosition(2 + j, 4 + k);
					putchar('*');
				}
			}
			
			
			
			for(i=0;i <= last;i++)
			{
				Console::SetCursorPosition(p + 5, 5);
				cout << q[i];
				Console::SetCursorPosition(30, 15);
				p = p + 8;
			}
		}
		cout << "press enter to continue...";
		Console::ReadLine();
		Console::Clear();
		x = menu();
	}
	if (x == 4)
	{
		cout << "exit......." << endl;
	}
	return 0;
}