/*这是一个多行注释
*文件名：T6_36.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：递归的求幂计算 
*/#include <iostream>

using namespace std;
int power(int base,int exponent)
{
	int n=1;
	if(exponent==1) return base;
	else n=base*power(base,exponent-1);
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<power(m,n);
	return 0;
}
