/*这是一个多行注释
*文件名：T6_20.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能: 倍数 
*/#include<iostream>
using namespace std;
int multiple(int a, int b)
{
	int c,d;
	c=b%a;
	if(0==c)
	{
		d=1;
	}else{d=0;
	}return d;
}

int main()
{
	int a,b;
	cin>>a>>b;
	
	cout<<multiple(a,b);
		
}
