/*
*FileName:   T7_14.cpp
*Author:     韩艺侗
*E-mail:     2101870137@qq.com
*Date:       2022.4.11
*College:    School of Computer Science and Information Engineering
*Function:   利用vector对象去重。
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	cout << "请输入20个整数（10--100）： " << endl;
	vector<int>arr(20);
	int n, f,k=0;
	for (int i = 0; i < 20; i++)
	{
		cin >> n;
		for (int j = 0; j < 20; j++)
		{
			f = 0;//标志，f=0不重
			if (n == arr[j])
			{
				f = 1;
				break;
			}
		}
		if (0 == f)
		{
			arr[k++] = n;
		}
	}
	for (int i = k - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	return 0;
}
