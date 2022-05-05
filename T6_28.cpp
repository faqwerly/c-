/*这是一个多行注释
*文件名：T6_28.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：全数 
*/#include <iostream>

using namespace std;
bool isperfect(int number)
{
	int sum=1;
	for(int i=2;i<number;i++)
	{
		if(number%i==0) sum+=i;
	}
	if(number==sum) return true;
	else  return false;
}
int main()
{
	for(int i=1;i<1001;i++)
	{
		if(isperfect(i)) cout<<i<<endl;
	}
	return 0;
 } 
