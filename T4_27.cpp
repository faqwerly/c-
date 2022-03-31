/*这是一个多行注释
*文件名：T4_27.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.19
*学院：School of Computer Information and Engineering
*功能：打印二进制数的十进制值 
*/#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d=1,sum=0;
    cin>>a;
    while(a)
    {
        b=a/10;
        c=a-b*10;
        sum=sum+c*d;
        d=d*2;
        a=a/10;

    }
    cout<<sum;
    return 0;
}
