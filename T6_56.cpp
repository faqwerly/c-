/*这是一个多行注释
*文件名：T6_56.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：C++的作用域限定的枚举类型 
*/#include <iostream>

using namespace std;
namespace A
	{
		enum AccountType {SAVINGS,CHECKING,INVESTMENT};
	}
int main()
{
	
	cout<<A::SAVINGS;
	return 0;
}
