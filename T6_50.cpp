/*这是一个多行注释
*文件名：T6_50.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：按值传递与按引用传递 
*/#include <iostream>
#include <iomanip>
using namespace std;

double tripleByValue(double x)
{
	return 3*x;
}
void tripleByReference(double &x)
{
	x*=3;
}
int main()
{
	cout<<fixed<<setprecision(3);
	double count;
	cin>>count;
	cout<<tripleByValue(count)<<endl;
	tripleByReference(count);
	cout<<count;
	return 0;
 } 
