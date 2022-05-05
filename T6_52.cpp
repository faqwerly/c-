/*这是一个多行注释
*文件名：T6_52.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：函数模板maximum 
*/#include <iostream>

using namespace std;
template <typename T>
T minimum(T x,T y)
{
	if(x>y) x=y;
	return x;
}

int main()
{
	
	 int a,b;
	 cin>>a>>b;
	 cout<<minimum(a,b)<<endl;
	 double p,q;
	 cin>>p>>q;
	 cout<<minimum(p,q)<<endl;
	 char x,y;
	 cin>>x>>y;
	 cout<<minimum(x,y);                                                                                        
	return 0;
}
