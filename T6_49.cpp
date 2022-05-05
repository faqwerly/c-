/*这是一个多行注释
*文件名：T6_49.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：圆面积计算 
*/#include <iostream>
#include <iomanip>
#define PI 3.1415
using namespace std;

inline double S(const double r)
{
	return PI*r*r; 
}
int main()
{
	cout<<fixed<<setprecision(4); 
	int r;
	cin>>r;
	cout<<S(r);
	return 0;
}
