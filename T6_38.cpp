/*这是一个多行注释
*文件名：T6_38.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：汉诺塔问题 
*/#include <iostream>
 
using namespace std;
void Hanota(int number,char first,char last,char temp)
{
	if(number==1)
	{
		cout<<first<<"—>"<<last<<endl;
		return ;
	}
	Hanota(number-1,first,temp,last);
	Hanota(1,first,last,temp);
	Hanota(number-1,temp,last,first);
	return ;
}

int main()
{
	int n;
	cin>>n;
	Hanota(n,'1','3','2');
	return 0;
}
