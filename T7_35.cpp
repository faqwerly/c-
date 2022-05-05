/*
*FileName:   T7_35.cpp
*Author:     韩艺侗 
*E-mail:     2101870137@qq.com
*Date:       2022.4.16
*College:    School of Computer Science and Information Engineering
*Function:   民意测验。
*/
#include<iostream>
#include<string>
using namespace std;
void test(string top[], int arr[][10])
{
	cout << "请对相应问题输入评分（分数在1--10之间）： ";
	int m;
	for (int i = 0; i < 5; ++i)
	{
		cout << top[i]<<":  ";
		cin >> m;
		arr[i][m - 1]++;
	}
}
int main()
{
	int f = 0,count=0;
	string top[5] = { "topic1","topic2","topic3","topic4","topic5" };
	int arr[5][10] = { 0 };
	while (1)
	{
		cout << "输入1开始测评，0终止测评： " << endl;
		cin >> f;
		if (0 == f)break;
		else ++count;
		test(top, arr);
	}
	cout << "\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\taverage\t" << endl;
	int sum[5] = { 0 };
	for (int i = 0; i < 5; ++i)
	{
		cout << top[i] << "\t";
		for (int j = 0; j < 10; ++j)
		{
			cout << arr[i][j]<<"\t";
			sum[i] += arr[i][j] * (j + 1);
		}
		cout << (double)sum[i] /count << "\t";
		cout << endl;
	}
	int tem,max,min;
	int sum1[5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		sum1[i] = sum[i];
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4 - i; ++j)
		{
			if (sum[j] > sum[j + 1])
			{
				tem = sum[j];
				sum[j] = sum[j + 1];
				sum[j + 1] = tem;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (sum1[i] == sum[0])min = i;
		if (sum1[i] == sum[4])max = i;
	}
	cout << "最高分： " << top[max] << "  " << sum[4] << endl;
	cout << "最低分： " << top[min] << "  " << sum[0] << endl;
	return 0;
}
