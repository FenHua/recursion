/* C_sort.cpp :
��������

��R = { r1, r2, ..., rn }��Ҫ�������е�n��Ԫ�أ�Ri = R - {ri}������x��Ԫ�ص�ȫ���м�ΪPerm(X)��(ri)Perm(X)��ʾ��ȫ����Perm(X)��ÿһ������ǰ����ǰ׺ri�õ������С�R��ȫ���пɹ������£�

��n = 1ʱ��Perm(R) = (r)������r�Ǽ�����Ψһ��Ԫ�أ�

��n>1ʱ��Perm(R)��(r1)Perm(R1), (r2)Perm(R2), (r3)Perm(R3)��������(rn)Perm(Rn)���ɡ�
*/

#include "stdafx.h"
#include"iostream"
using namespace std;
template <class type> inline void Swap(type &a, type &b);//ģ�壬��������
template <class type> void Perm(type list[], int k, int m);//Perm������ʾȫ����

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
	//ֻʣ��һ��Ԫ��
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
		//��list[k:m]�е�ÿһ��Ԫ�طֱ���list[k]�е�Ԫ�ؽ���
		//Ȼ��ݹ����list[k+1:m]��ȫ���У�����������Ϊlist[0:k]��׺
		for (int i = k; i <=m; i++)
		{
			Swap(list[k], list[i]);
			Perm(list, k + 1, m);
			Swap(list[k], list[i]);
		}
	}
}

