/*Int_div.cpp : 定义控制台应用程序的入口点。
将正整数n表示成一系列正整数之和，n=n1+n2+n3+......nk(其中，n1>=n2>=......nk>=1,k>=1),正整数n的这种表示称为正整数n的划分。正整数n的不同划分个数称为正整数n的划分数,记作p(n)。例如：正整数6有11总不同的划分
6;
5+1;
4+2,4+1+1;
3+3,3+2+1,3+1+1+1;
2+2+2,2+2+1+1,2+1+1+1+1;
1+1+1+1+1+1;
记q(n,m)为正整数n的所有不同划分中，最大加数n1不大于m的划分个数。可以建立如下递推关系:
前面三个递推式比较好理解，关键是第四个递推式。当n>m>1时，n的划分由两部分组成。以整数q(6,3)为例，q(n,m-1)内容是第5排和第6排内容，不大于2的6的划分；q(n-m,m)内容是第4排,不大于3的(6-3=3)的划分。
*/
//整数划分
#include "stdafx.h"
#include"iostream"
using namespace std;
int q(int n, int m);


int main()
{
	cout << q(6,6) << endl;
	return 0;
}

int q(int n, int m)
{
	if (n < 1 || m < 1)
	{
		return 0;
	}
	else if (n==1||m==1)
	{
		return 1;
	}
	else if (n < m)
	{
		return q(n, n);
	}
	else if (n == m)
	{
		return q(n, m - 1) + 1;
	}
	else
	{
		return q(n, m - 1) + q(n - m, m);
	}
}
