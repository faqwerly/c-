/*这是一个多行注释
*文件名：T6_30.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：数字反向 
*/#include <iostream>
#include <cstring>
using namespace std;
void fan(char x[],int l)
{
	for(int i=l-1;i>=0;i--)
	{
		cout<<x[i];
	}
}
int main()
{
	char m[30];
	cin>>m;
	int l;
	l=strlen(m);
	fan(m,l); 
	return 0;
}
