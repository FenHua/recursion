// Hanoi.cpp : �������̨Ӧ�ó������ڵ㡣
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
//����c����n�����Ӵ�a�Ƶ�b
void hanoi(int n, char a, char b, char c)
{
	if (n > 0)
	{
		hanoi(n - 1, a, c, b);//����b����n-1�����Ӵ�a�Ƶ�c
		cout << "��" << a << "�ж������Ӵ�" << a << "�Ƶ�" << b << endl;
		hanoi(n - 1, c, b, a);//����a,��n-1�����Ӵ�c�Ƶ�b
	}
}