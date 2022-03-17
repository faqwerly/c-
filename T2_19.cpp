/*这是一个多行注释
*文件名：T2_19.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.6
*学院：School of Computer Information and Engineering
*功能：编辑一个输入三个数然后输出他们的和、平均值、乘积、最大和最小值，格式按照题意
*/
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int a,b,c,d,e,Sum,Average,Product;
    cout <<"Input three different integers: ";
    cin >>a>>b>>c;
    d=max(a,b);
    e=min(a,b);
    Sum=a+b+c;
    Average=(a+b+c)/3;
    Product=a*b*c;
    cout <<"Sum is "<<Sum;
    cout <<"Average is "<<Average;
    cout <<"Product is "<<Product;
    cout <<"Smallest is "<<min(e,c);
    cout <<"Largest is "<<max(d,c);
    return 0;

}
