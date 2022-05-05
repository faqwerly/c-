/*这是一个多行注释
*文件名：T6_29.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：素数 
*/#include <iostream>
#include <cmath> 
using namespace std;
bool isPrime(int x)
{
	int a=1;
	x=sqrt(x)+2;
	if(x==1) return false;
	else
	{
		for(int i=2;i<x;i++)
		{
			if(x%i==0)
			{
				a=0;break;
			}
		}
		if(a==1) return true;
		else return false;
	}
	
}
int main()
{
	for(int i=2;i<10001;i++)
	{
		if(isPrime(i)) cout<<i<<endl;
	}
	return 0;
}
