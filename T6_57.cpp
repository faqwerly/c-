/*这是一个多行注释
*文件名：T6_57.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：计算机辅助教学 
*/#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int questionCreating(int &a,int &b)
{
	
	a=rand()%50;
	b=rand()%50;
	cout<<"How much is "<<a<<" times "<<b<<endl;
	return 1;
}

int main()
{
	int a,b;
	srand(time(0));
	while(questionCreating(a,b))
	{
		cout<<"Please input your answer："<<endl;
		int n;
		cin>>n;
		if(n==a*b) 
		{
			cout<<"Very good!"<<endl;
			break;
		}
		else
		{
			cout<<"No.Please try again";
		}
	}
	return 0;
}
