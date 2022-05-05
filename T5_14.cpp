/*这是一个多行注释
*文件名：T5_14.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.26
*学院：School of Computer Information and Engineering
*功能：计算总销售量 
*/
#include<iostream>

using namespace std;

int main()
{
	int number,sum;
	cout << "please choose your choice and number:";
	cin >> number >> sum;
	
	double each_value;
	double total_value;
	
	switch (number) {
		case 1:
			each_value = 2.98;
			total_value = each_value*sum;
			break;
		case 2:
			each_value = 4.50;
			total_value = each_value*sum;
			break;
		case 3:
			each_value = 9.98;
			total_value = each_value*sum;
			break;
		case 4:
			each_value = 4.49;
			total_value = each_value*sum;
			break;
		case 5:
			each_value = 6.87;
			total_value = each_value*sum;
			break;
		default:
			break;
	}
	cout << "you should pay totally:";
	cout << total_value << endl;
	
	return 0;
}
