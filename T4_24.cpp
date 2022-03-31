/*这是一个多行注释
*文件名：T4_24.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.19
*学院：School of Computer Information and Engineering
*功能：另一个摇摆问题 
*/#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if(y==8)//1
    if(x==5)
       cout<<"@@@@@"<<endl;
    else
        cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;
    cout<<"&&&&&"<<endl;
    cout<<endl;

    cin>>x>>y;
    if(y==8)//2
    {
        if(x==5)cout<<"@@@@@"<<endl;
    }
    else{
        cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;
    cout<<"&&&&&"<<endl;
    }
    cout<<endl;

    cin>>x>>y;
    if(y==8)//3
    if(x==5)
       cout<<"@@@@@"<<endl;
    else
        {cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;}
    cout<<"&&&&&"<<endl;
    cout<<endl;

    cin>>x>>y;
    if(y==8)//4
    {if(x==5)
       cout<<"@@@@@"<<endl;}
    else
        {cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;
    cout<<"&&&&&"<<endl;}
    cout<<endl;
    return 0;
}
