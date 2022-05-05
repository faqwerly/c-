/*这是一个多行注释
*文件名：T5_11.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.26
*学院：School of Computer Information and Engineering
*功能：复利 
*/ #include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
   double amount;
   double principal=1000.0;
   double rate;
   cout<<"Year"<<setw(21)<<"Amount on deposit"<<endl;
   for(rate=0.05;rate<=0.1;rate+=0.01)
 {
   
   for(unsigned year=1;year<=5;year++)
      {
   	amount=principal*pow(1.0+rate,year);
   	cout<<setw(4)<<year<<setw(21)<<amount<<endl;
   	
      }
      cout<<endl;
 }
}
