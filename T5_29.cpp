/*这是一个多行注释
*文件名：T5_29.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.26
*学院：School of Computer Information and Engineering
*功能 ：彼得.米纽伊特问题 
*/
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

//formatting stuff
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f,precis p);

int main()
{
	double amount;
	double principal = 24.0;
	cout << "Year" << setw(21) << "Amount on deposit" << endl;
	
	format initialState = setFormat();
	precis prec = cout.precision(2);
	
	for(double rate = 0.05;rate <= 0.10; rate += 0.01)
	{
		for(int year = 1; year <= 387; ++ year)
		{
			amount = principal * pow(1 + rate,year);
			
			cout << setw(4) << year << setw(21) << amount << endl;
		}
		cout << endl;
	}
	restore(initialState,prec);
}

format setFormat()
{
	//set up ###.## format
	return cout.setf(std::ios_base::fixed,
				 std::ios_base::floatfield);
}

void restore(format f,precis p)
{
	cout.setf(f,std::ios_base::floatfield);
	cout.precision(p);
}
