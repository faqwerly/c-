/*这是一个多行注释
*文件名：T4_34.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.19
*学院：School of Computer Information and Engineering
*功能：阶乘 
*/#include <iostream>

using namespace std;

int main()
{
    int n,sum=1;
    cin>>n;
    if(n<0) ;
    else
    {
        if(n==0||n==1)cout<<1;
        else
        {while(n)
        {
            if(n==1) ;
            else sum*=n;
            n--;
        }
            cout<<sum;}
    }

    return 0;
}
