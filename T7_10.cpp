/*
*FileName:   T7_10.cpp
*Author:     韩艺侗
*E-mail:     2101870137@qq.com
*Date:       2022.4.11
*College:    School of Computer Science and Information Engineering
*Function:   销售人员薪资范围。
*/
#include<iostream>
using namespace std;
int main()
{
	double sales=0,salary=200;
	int array[9] = { 0 };
	cout << "请依次输入销售人员的周销售额（输入-1结束）： " << endl;
	while (1)
	{
		cin >> sales;
		if (-1 == sales)
		{
			break;
		}
		salary = 200;
		salary += (0.09 * sales);
		if (salary <= 299)
		{
			array[0]++;
		}
		else if (salary <= 399)
		{
			array[1]++;
		}
		else if (salary <= 499)
		{
			array[2]++;
		}
		else if (salary <= 599)
		{
			array[3]++;
		}
		else if (salary <= 699)
		{
			array[4]++;
		}
		else if (salary <= 799)
		{
			array[5]++;
		}
		else if (salary <= 899)
		{
			array[6]++;
		}
		else if (salary <= 999)
		{
			array[7]++;
		}
		else
		{
			array[8]++;
		}
	}
	cout << "200--299$: " << array[0] << "人" << endl;
	cout << "300--399$: " << array[1] << "人" << endl;
	cout << "400--499$: " << array[2] << "人" << endl;
	cout << "500--599$: " << array[3] << "人" << endl;
	cout << "600--699$: " << array[4] << "人" << endl;
	cout << "700--799$: " << array[5] << "人" << endl;
	cout << "800--899$: " << array[6] << "人" << endl;
	cout << "900--999$: " << array[7] << "人" << endl;
	cout << "1000$及以上: " << array[8] << "人" << endl;
	return 0;
}
