/*这是一个多行注释
*文件名：T5_18.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.26
*学院：School of Computer Information and Engineering
*功能：进制表 
*/
#include<iostream>

using namespace std;

void binary_func(int a)
{
	if(a) binary_func(a/2);
	if(!a) {if(a % 2) cout << 1;return;}
	cout << a%2;
}

int main()
{
	cout << "D\tB\t\tO\tH" << endl;
	for(int i = 1; i <= 256; i ++ )
	{
		cout << dec << i << '\t';
		binary_func(i); cout << "\t\t";
		cout << oct << i << '\t';
		cout << hex << i << endl;
		
	}
	
	return 0;
}
