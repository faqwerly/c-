/*这是一个多行注释
*文件名：T6_45.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：
*/#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;

int mystery(int,int);
int main()
{
	int x=0;
	int y=0;
	cin>>x>>y;
	cout<<"The result is "<<mystery(x,y)<<endl;
	return 0;
}
int mystery(int a,int b)
{
	if(b<0)
	{
		a=-a;b=-b;
	 } 
	if(b==1) return a;
	else return a+mystery(a,b-1);
}
