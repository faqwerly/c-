/*
*FileName:   T7_21.cpp
*Author:     韩艺侗
*E-mail:     2101870137@qq.com
*Date:       2022.4.15
*College:    School of Computer Science and Information Engineering
*Function:   销售汇总。
*/
#include<iostream>
using namespace std;
int main()
{
	double x;
	int arr[5][4] = { 0 };  //销售员编号1-4，产品编号1-5；
	int i, j,sum=0,s=0;
	cout << "销售员编号1-4，产品编号1-5" << endl;
	cout << "请依次输入产品编号，销售员编号和当天的销售总额（中间空格隔开，输入“0 0 0”结束输入）： " << endl;
	while (1)
	{
		cin >> i >> j >> x;
		if (0 == i)break;
		arr[i-1][j-1] += x;
	}
	cout << "\t1\t" << "2\t" << "3\t" << "4\t"<<"sum" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << i + 1 << "\t";
		for (j = 0; j < 4; j++)
		{
			cout << arr[i][j] << "\t";
			sum += arr[i][j];
		}
		cout <<sum<< endl;
		sum = 0;
	}
	cout << "sum\t";
	for (j = 0; j < 4; j++)
	{
		for (i = 0; i < 5; i++)
		{
			s += arr[i][j];
		}
		cout << s << "\t";
		s = 0;
	}
	return 0;
}
