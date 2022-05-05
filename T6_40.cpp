/*这是一个多行注释
*文件名：T6_40.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：递归的可视化 
*/#include <iostream>

using namespace std;
int factorial(int n)
{
	int x=1;

	if(n==1||n==0)
	{
		cout<<n<<" "<<x<<endl;
		return x;
	}
	x=n*factorial(n-1);	
	cout<<n<<" "<<x<<endl;
	return x;
}
int main()
{
	factorial(10);
	return 0;
}
