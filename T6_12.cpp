/*这是一个多行注释
*文件名：T6_12.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：停车费
*/
#include <iostream>
using namespace std;
#include <iomanip>
double app(double Hours)
{
	double Charge;
	if (Hours <= 3.0)
	{
		Charge = 2.00;
	}
	else {
		Charge = 0.50 * (Hours - 3.00) + 2.00;
	}
	if (Charge >= 10.0) { Charge = 10.0; }
	return Charge;
}
int main()
{
	double Hours;
	double arr[3] = { 0 };
	double arr2[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> arr2[i];


		arr[i] = app(arr2[i]);
	}
	cout << "Car" << setw(10) << "Hours" << setw(10) << "Charge";
	cout << "\n1" << setw(10) << arr2[0] << setw(10) << arr[0];
	cout << "\n2" << setw(10) << arr2[1] << setw(10) << arr[1];
	cout << "\n3" << setw(10) << arr2[2] << setw(10) << arr[2];
	cout << "\nTOTAL" << setw(6) << arr2[0] + arr2[1] + arr2[2] << setw(10) << arr[0] + arr[1] + arr[2];
}