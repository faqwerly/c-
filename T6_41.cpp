/*这是一个多行注释
*文件名：T6_41.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：递归的最大公约数 
*/#include <iostream>

using namespace std;
int gcd(int x,int y)
{
	int t;
	if(x<y)
	{
		t=x;x=y;y=t;
	}
	if(y==0) return x;
	return gcd(y,x%y);
	
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<gcd(m,n);
	return 0;
}
