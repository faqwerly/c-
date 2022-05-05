/*这是一个多行注释
*文件名：T6_42.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：两点之间的距离 
*/#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double distance(double x,double y,double p,double q)
{
	double l;
	l=(x-p)*(x-p)+(y-q)*(y-q);
	l=sqrt(l);
	return l;
 } 
int main()
{
	cout<<fixed<<setprecision(4);
	double a,b,m,n;
	cin>>a>>b>>m>>n;
	cout<<distance(a,b,m,n);
	return 0;
}
