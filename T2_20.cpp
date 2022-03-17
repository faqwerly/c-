/*这是一个多行注释
*文件名：T2_20.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.6
*学院：School of Computer Information and Engineering
*功能：输入一个半径，输出直径、周长和面积
*/#define pi 3.14159
#include <iostream>
using namespace std;
int main()
{
    float x,radius,diameters,girth,area;
    cout<<"Please input an radius";
    cin>>x;
    diameters=2*x;
    girth=2*pi*x;
    area=pi*x*x;
    cout<<"diameters:"<<diameters ;
    cout<<"girth:"<<girth ;
    cout<<"area:"<<area ;
    return 0;


}
