/*
*FileName:   T7_25.cpp
*Author:     韩艺侗
*E-mail:     2101870137@qq.com
*Date:       2022.4.16
*College:    School of Computer Science and Information Engineering
*Function:   八皇后问题，蛮力解决。
*/
#include<iostream>
using namespace std;
int a, b, c, d, e, f, g, h,i,j;
int arr[8] = {0};
void print() //输出放置后的八皇后棋盘
{

	for (int i = 0; i < 8; ++i) //四皇后为例：输出2413  3142
	{
		for (int j = 0; j < 8; ++j)
		{
			if (j == arr[i]) cout << "1 \t";
			else cout << "0 \t";
		}
		cout << endl;
	}
	cout << endl;
}
int main()
{
	int count = 0;
	for ( a = 1; a <= 8; a++)
	{
		for ( b = 1; b <= 8; b++)
		{
			for ( c = 1; c <= 8; c++)
			{
				for ( d = 1; d <= 8; d++)
				{
					for (e = 1; e <= 8; e++)
					{
						for (f = 1; f <= 8; f++)
						{
							for ( g = 1; g <= 8; g++)
							{
								for (h = 1; h <= 8; h++)
								{
									arr[0] = a, arr[1] = b, arr[2] = c, arr[3] = d, arr[4] = e, arr[5] = f, arr[6] = g, arr[7] = h;
									int f = 1;
									for (i = 0; i < 8; i++)
									{
										for (j = i+1; j < 8; j++)
										{
											if (arr[i] == arr[j] || i - j == arr[i] - arr[j] || i - j == arr[j] - arr[i])
											{
												f = 0;
												break;
											}
										}
									}
									if (1 == f) { print(); count++; }
								}
							}
						}
					}
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}
