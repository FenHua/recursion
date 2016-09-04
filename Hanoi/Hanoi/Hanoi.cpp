// Hanoi.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
void hanoi(int n, char a, char b, char c);
int main()
{
	char a = 'A';
	char b = 'B';
	char c = 'C';
	hanoi(3, a, b, c);
	return 0;
}
//借助c，将n个盘子从a移到b
void hanoi(int n, char a, char b, char c)
{
	if (n > 0)
	{
		hanoi(n - 1, a, c, b);//借助b，将n-1个盘子从a移到c
		cout << "将" << a << "中顶部盘子从" << a << "移到" << b << endl;
		hanoi(n - 1, c, b, a);//借助a,将n-1个盘子从c移到b
	}
}