/*这是一个多行注释
*文件名：T6_53.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：函数模板maximum 
*/#include <iostream>

using namespace std;
template <class T>
T maximum(T x,T y)
{
	if(x<y) x=y;
	return x;
 } 

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<maximum(a,b)<<endl;
	double x,y;
	cin>>x>>y;
	cout<<maximum(x,y)<<endl;
	char p,q;
	cin>>p>>q;
	cout<<maximum(p,q);
	return 0;
}
