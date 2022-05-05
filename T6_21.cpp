/*这是一个多行注释
*文件名：T6_21.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能: 偶数 
*/#include <iostream>
#include <string>

using namespace std;

int iseven(int a)
{
	
	if(0==a%2)
	{
		return 1; 
	}else {return 0;
	}
} 
int main()
{
	int arr[9999];
	int x,a;
	
	cout<<"Please input the number you want to check: ";
	cin>>x;
	for(int i=0;i<x;i++)
	{
		cin>>arr[i];
		a=arr[i];
		cout<<iseven(a);
		
	}
} 
