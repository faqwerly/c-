/*这是一个多行注释
*文件名：T5_19.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.26
*学院：School of Computer Information and Engineering
*功能 ：求Π的值 
*/
#include<iostream>

using namespace std;

int main()
{
	double ans = 0;
	int sg = 1;
	for(int i = 1; i <= 1000; i ++ )
	{
		double b = 2*i - 1;
		ans += sg/b;
		sg *= -1;
		cout << i << "\t" << 4*ans << endl;
	}
	
	return 0;
}
