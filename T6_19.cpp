/*这是一个多行注释
*文件名：T6_19.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：直角三角形斜边的计算 
*/#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double hypotenuse(double a,double b)
{
	double c;
	c=pow(a*a+b*b,0.5);
	return c;
	
}
int main()
{
	double a;double b;
	cin>>a>>b;
	cout<<setiosflags(ios::showpoint)<<hypotenuse(a,b);
} 
