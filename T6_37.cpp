/*这是一个多行注释
*文件名：T6_37.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：斐波那契数列的迭代版本 
*/#include <iostream>

using namespace std;
int fibonacci(int n)
{
	int m[n];
	for(int i=0;i<n;i++)
	{
		if(i<2) m[i]=i;
		else m[i]=m[i-1]+m[i-2];
	}
	return m[n-1];
}
int main()
{
	cout<<"fabonacci is ";
	for(int i=0;i<=10;i++)
	{
		cout<<fibonacci(i)<<" ";
	}
	return 0;
}
