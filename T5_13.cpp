/*这是一个多行注释
*文件名：T5_13.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.26
*学院：School of Computer Information and Engineering
*功能：条形图 
*/
#include<iostream>

using namespace std;

int main()
{
	for(int i = 0,a; i < 5; i ++ )
	{
		cin >> a;
		for(int j = 0; j < a; j ++ ) cout << "*";
		cout << endl;
	}
	
	return 0;
} 
