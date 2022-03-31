/*这是一个多行注释
*文件名：T4_32.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.19
*学院：School of Computer Information and Engineering
*功能：三角形的边 
*/#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a>0&&b>0&&c>0)
    {
        if(a+b>c&&a+c>b&&b+c>a)
            cout<<"可以表示三角形的三条边";
            else cout<<"不能表示三角形的三条边";
    }
    else cout<<"不能表示三角形的三条边";
    return 0;
}
