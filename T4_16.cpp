/*这是一个多行注释
*文件名：T4_16.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.19
*学院：School of Computer Information and Engineering
*薪金计算器 
*/#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
	double a,b,c,n=1;
	while(n!=0)
	{
	cout<<"Enter hours worked(-1 to end)";cin>>a;
	cout<<"Enter hourly rate of the employee($00.00): 10.00";
	if(a>40)
	 {cout<<"\nSalary is $"<<400+(a-40)*15;
	 }else {cout<<"\n6Salary is $"<<a*10;
	 }
	 cout<<endl;}
}
