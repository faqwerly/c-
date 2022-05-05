/*这是一个多行注释
*文件名：T6_26.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：温度 
*/#include <iostream>
#include <iomanip>
using namespace std;
int celsius(int x)
{
	int a;
	a=(x-32)/1.8;
	return a;
}

int fahrenheit(int x)
{
	int a;
	a=x*1.8+32;
	return a;
}
int main()
{
	cout<<setw(12)<<"fahrenheit "<<"celsius"<<endl;
	for(int i=32;i<213;i++)
	{
		cout<<i<<"         "<<celsius(i)<<endl;
	} 
	cout<<"celsius "<<"fahrenheit"<<endl;
	for(int i=0;i<101;i++)
	{
		cout<<i<<"        "<<fahrenheit(i)<<endl;
	}
	return 0;
}
