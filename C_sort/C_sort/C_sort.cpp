/* C_sort.cpp :
排列问题

设R = { r1, r2, ..., rn }是要进行排列的n个元素，Ri = R - {ri}。集合x中元素的全排列记为Perm(X)。(ri)Perm(X)表示在全排列Perm(X)的每一个排列前加上前缀ri得到的排列。R的全排列可归纳如下：

当n = 1时，Perm(R) = (r)，其中r是集合中唯一的元素；

当n>1时，Perm(R)由(r1)Perm(R1), (r2)Perm(R2), (r3)Perm(R3)。。。。(rn)Perm(Rn)构成。
*/

#include "stdafx.h"
#include"iostream"
using namespace std;
template <class type> inline void Swap(type &a, type &b);//模板，函数声明
template <class type> void Perm(type list[], int k, int m);//Perm函数表示全排列

int main()
{
	int list[3];
	for (int i = 0; i < 3; i++)
	{
		list[i] = i + 1;
	}
	Perm(list, 0, 2);
	return 0;
}

template<class type>inline void Swap(type &a, type &b)
{
	type temp = a;
	a = b;
	b = temp;
}

template <class type>void Perm(type list[], int k, int m)
{
	//只剩下一个元素
	if (k == m)
	{
		for (int i = 0; i <=m; i++)
		{
			cout << list[i] << " ";
		}
		cout << endl;
	}
	else
	{
		//将list[k:m]中的每一个元素分别与list[k]中的元素交换
		//然后递归计算list[k+1:m]的全排列，将计算结果作为list[0:k]后缀
		for (int i = k; i <=m; i++)
		{
			Swap(list[k], list[i]);
			Perm(list, k + 1, m);
			Swap(list[k], list[i]);
		}
	}
}

