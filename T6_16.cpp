/*这是一个多行注释
*文件名：T6_16.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：随机数 
*/#include <iostream>
#include<time.h>
#include<stdlib.h> 
using namespace std;
int main()
{	int a;
	srand(time(0));
	a=1+rand()%2;
	cout<<a<<endl;
	a=1+rand()%100;
    cout<<a<<endl;
    a=0+rand()%10;
    cout<<a<<endl;
    a=1000+rand()%113;
    cout<<a<<endl;
    a=-1+rand()%1;
    cout<<a<<endl;
    a=-3+rand()%9;
    cout<<a<<endl;
}
 
