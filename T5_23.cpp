/*这是一个多行注释
*文件名：T5_23.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.26
*学院：School of Computer Information and Engineering
*功能 ：星号组成的菱形图案 
*/
#include<iostream>

using namespace std;

int main()
{
	int n;cin >> n;
	int len = 2*n + 1;
	for(int i = 1; i <= n; i ++ )
	{
		for(int j = 0; j < (n - i + 1); j ++ ) cout << " ";
		for(int j = 0; j < 2*i - 1; j ++ ) cout << "*";
		for(int j = 0; j <= (n - i + 1); j ++ ) cout << " ";
		cout << endl;
	}
	
	for(int i = 0; i < len; i ++ ) cout << "*";
	cout << endl;
	
	for(int i = 1; i <= n; i ++ )
	{
		for(int j = 0; j < i; j ++ ) cout << " ";
		for(int j = 0; j < 2*n - 2*i + 1; j ++ ) cout << "*";
		for(int j = 0; j <= i; j ++ ) cout << " ";
		cout << endl;
	}
	
	
	
	
	return 0;
} 
