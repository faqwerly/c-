/*这是一个多行注释
*文件名：T2_18.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.6
*学院：School of Computer Information and Engineering
*功能：比较两个数，输出较大数，相同时输出英文两数相等
*/#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Please input these numbers ";
    cin>>a>>b;
    if(a==b){ cout<<"These numbers are equal"<<endl;}
       else  if(a>b){
            cout<<a <<"is large"<<endl;}
        else { cout<<b <<"is large"<<endl;}


}
