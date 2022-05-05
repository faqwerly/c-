/*这是一个多行注释
*文件名：T6_14.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：数的特定小数舍入 
*/
#include<iostream>
#include<cmath> 
using namespace std;
double roundToInteger(double number)
{
	double a;
	a=floor(number*10+0.5)/10;
	
	return a;
}
double roundTenths(double number)
{
	double b;
	b=floor(number*100+0.5)/100;
	return b;
}
double roundToHundredths(double number)
{
	double c;
	c=floor(number*1000+0.5)/1000;
	return c;
}
double roundToThousandths(double number)
{
	double d;
	d=floor(number*10000+0.5)/10000;
    return d;	
}
int main()
{
	double number;
	int select;
	while (0==select)
	{
	    double number;
	    cout<<"请输入你要转化的数："; 
	    cin >> number;
	    cout<<roundToInteger(number)<<" "<<roundTenths(number)<<" "<<roundToHundredths(number)<<" "<<roundToThousandths(number)<<endl;
		cout<<"\n要继续进行数的整数舍入吗？继续请输入0，结束请输入其他" <<endl;
		cin>> select; 
    } 
    cout<<"*****程序已结束*****"<<endl;
}  
