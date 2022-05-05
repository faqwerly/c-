/*这是一个多行注释
*文件名：T6_18.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：求幂计算 
*/#include <iostream>
using namespace std;
int integerPower(int base, int exponent)
{
	int i=1;
	int sum=base;
	while(i<exponent)
	{
		sum=sum*base;
		i++;
	}
	return sum;
	
}
int main()
{
	int base;
	int exponent;
	cin>>base;
	cin>> exponent;
	cout<<integerPower(base,exponent);
}
