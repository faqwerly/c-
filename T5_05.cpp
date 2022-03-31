/*这是一个多行注释
*文件名：T5_05.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.26
*学院：School of Computer Information and Engineering
*功能：整数求和 
*/ #include <iostream>
using namespace std;
int main()
{
	int a,num=0,b,i;
	cout<<"请输入要输入值的个数a= " ;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		cin>>b;
		num=num+b;
	}
	cout<<num;
 } 
