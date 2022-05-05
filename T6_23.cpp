/*这是一个多行注释
*文件名：T6_23.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：任意符号组成的方形图案 
*/
#include <iostream>
using namespace std;
void square(int side )
{
	char fillCharacter;
	cin>>fillCharacter;
	for(int i=0;i<side;i++)
	{
		cout<<fillCharacter;
		for(int j=0;j<side-1;j++)
		{
			cout<<fillCharacter;
			
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
