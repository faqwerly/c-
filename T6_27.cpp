/*这是一个多行注释
*文件名：T6_27.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：找最小数 
*/#include <iostream>
#include <iomanip>
using namespace std;
double min(double a,double b,double c)
{
	int t;
	if(a>b)
	{
		t=a;a=b;b=t;
	}
	if(a>c)
	{
		t=a;a=c;c=t;
	}
	if(b>c)
	{
		t=b;b=c;c=t;
	}
	return a;
}
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	cout<<fixed<<setprecision(2)<<min(a,b,c);
	return 0;
}
