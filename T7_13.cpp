/*
*FileName:   T7_13.cpp
*Author:     ���ն�
*E-mail:     2101870137@qq.com
*Date:       2022.4.11
*College:    School of Computer Science and Information Engineering
*Function:   ����array����ȥ�ء�
*/
#include<iostream>
using namespace std;
int main()
{
	int array[20] = { 0 };
	int n,f,k=0;
	cout << "������20��������10--100���� " << endl;
	for (int i = 0; i < 20; i++)
	{
		cin >> n;
		for (int j = 0; j < 20; j++)
		{
			f = 0;//��־��f=0����
			if (n == array[j])
			{
				f = 1;
				break;
			}
		}
		if (0 == f)
		{
			array[k++] = n;
		}
	}
	for (int i = k - 1; i >= 0; i--)
	{
		cout << array[i] << "\t";
	}
	return 0;
}