/*这是一个多行注释
*文件名：T6_31.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：最大公约数 
*/#include <iostream>

using namespace std;
int gcd(int a,int b)
{
	int t;
	if(a<b)
	{
		t=a;a=b;b=t;
	 } 
	while(b!=0)
	{
		int n;
		n=a%b;
		a=b;b=n;
	}
	return a;
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<gcd(m,n);
	return 0;
}
