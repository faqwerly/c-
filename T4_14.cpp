/*这是一个多行注释
*文件名：T4_14.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.19
*学院：School of Computer Information and Engineering
*功能：信用额度问题
*/#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a,b,c,d,e,f,n=1;
	while(n!=0){
	cout<<"Enter accout number (or -1 to quit):";cin>>a;
	cout<<"Enter beginning balance:";cin>>b;
	cout<<"Enter total charges" ;cin>>c;
	cout<<"Enter total credits";cin>>d;
	cout<<"Enter credit limit";cin>>e;
	f=b+c-d;
	cout<<"New balance is"<<f;
	cout<<"Account:"<<a;
	cout<<"Credit limit:"<<e;
	cout<<"Balance:"<<f;
	if(f>e)
	{cout<<"Credit Limit Exceeded";}
	else cout<<endl;
	}
}
