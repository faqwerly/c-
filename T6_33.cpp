/*这是一个多行注释
*文件名：T6_33.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：抛硬币 
*/#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
bool flip()
{
	int n;
	n=rand()%3+1;
	if(n==1) return true;
	else return false;
}
int main()
{
	srand(time(0));
	int n,a=0,b=0;
	for(int i=0;i<100;i++)
	{
		
		n=flip();
		if(n==1)
		{
			cout<<"Head"<<" ";
			a++;
		}
		else
		{
			cout<<"Tail"<<" ";
			b++;	
		}
	}
	cout<<endl;
	cout<<"Head is "<<a<<" times  Tail is "<<b<<" times";
	return 0;
 } 
