/*这是一个多行注释
*文件名：T6_22.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：星号组成的正方形图案 
*/
#include <iostream>
using namespace std;
void square(int side )
{
	for(int i=0;i<side;i++)
	{
		cout<<"*";
		for(int j=0;j<side-1;j++)
		{
			cout<<"*";
			
		}
		cout<<endl;
	}
}
int main()
{
 	int side;
	 cin>>side;
	 square(side);	
} 
