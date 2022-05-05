/*这是一个多行注释
*文件名：T5_12.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.26
*学院：School of Computer Information and Engineering
*功能：使用嵌套的for循环绘制图案 
*/
#include<iostream>

using namespace std;

int main()
{
	int n;cin >> n;

	for(int j = 1;j <= n; j ++ )
	{
		for(int k = 1; k <= j; k ++ ) cout << "*";
		for(int k = n - j; k > 0; k -- ) cout << " ";
		cout << endl;
	}
	
	cout << endl;
	for(int j = 1;j <= n; j ++ )
	{
		for(int k = n - j; k > 0; k -- ) cout << " ";
		for(int k = 1; k <= j; k ++ ) cout << "*";
		cout << endl;
	}
	
	cout << endl;
	for(int j = 1;j <= n; j ++ )
	{
		for(int k = n + 1 - j; k > 0; k -- ) cout << "*";
		for(int k = 1; k <= j - 1; k ++ ) cout << " ";
		cout << endl;
	}
	
	cout << endl;
	for(int j = 1;j <= n; j ++ )
	{
		for(int k = 1; k <= j - 1; k ++ ) cout << " ";
		for(int k = n + 1 - j; k > 0; k -- ) cout << "*";
		cout << endl;
	}

	for(int j = 1; j <= n; j ++ )
	{
		for(int k = 1; k <= j; k ++ ) cout << "*";
		for(int k = n - j; k > 0; k -- ) cout << " ";
		cout << "\t\t";
		for(int k = n - j; k > 0; k -- ) cout << " ";
		for(int k = 1; k <= j; k ++ ) cout << "*";
		cout << "\t\t";
		for(int k = n + 1 - j; k > 0; k -- ) cout << "*";
		for(int k = 1; k <= j - 1; k ++ ) cout << " ";
		cout << "\t\t";
		for(int k = 1; k <= j - 1; k ++ ) cout << " ";
		for(int k = n + 1 - j; k > 0; k -- ) cout << "*";
		cout << "\t\t";
		cout << endl;
	}
	
	
	return 0;
}
