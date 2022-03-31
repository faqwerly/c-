/*这是一个多行注释
*文件名：T4_17.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.19
*学院：School of Computer Information and Engineering
*找最大数 
*/#include <iostream> 
#include<cmath>
using namespace std;
int main()
{
	int arr[10],i=1;
	int max=0;
	while(i<=10)
     { 
	 cin>>arr[i];if (arr[i]>max)
 		{max=arr[i];}
     i++;}cout<<"Largest is:"<<max;
   	return 0;
}
 
