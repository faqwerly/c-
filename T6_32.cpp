/*这是一个多行注释
*文件名：T6_32.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：成绩的绩点 
*/#include <iostream>

using namespace std;
void qualityPoints(int x)
{
	int a;
	if(x<=100&x>=90) a=4;
	if(x<=89&&x>=80) a=3;
	if(x<=79&&x>=70) a=2;
	if(x<=69&&x>=60) a=1;
	if(x<60) a=0;
	cout<<a;
}
int main()
{
	int n;
	cin>>n;
	qualityPoints(n);
	return 0;	
}
