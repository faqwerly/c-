/*这是一个多行注释
*文件名：T6_25.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：温度 
*/#include <iostream>

using namespace std;
int cntTime(int h,int m,int s)
{
	return 3600*h+60*m+s;
}
int main()
{
	cout<<"Please input the time(hour-minute-second)"<<endl;
	int h,m,s;
	int t1,t2; 
	cin>>h>>m>>s;
	t1=cntTime(h,m,s);
	cin>>h>>m>>s;
	t2=cntTime(h,m,s);
	cout<<t2-t1; 
	return 0;
 } 
