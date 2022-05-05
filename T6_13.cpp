/*这是一个多行注释
*文件名：T6_13.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：数的整数舍入
*/#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int select;
	while (0==select)
	{
	    double a;
	    cout<<"请输入你要转化的数："; 
	    cin >> a;
		cout<<a<<"  "<< floor(a + 0.50);
		cout<<"\n要继续进行数的整数舍入吗？继续请输入0，结束请输入其他" <<endl;
		cin>> select; 
    } 
    cout<<"*****程序已结束*****"<<endl; 
}
