/*这是一个多行注释
*文件名：T4_25.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.19
*学院：School of Computer Information and Engineering
*功能：星号正方形 
*/#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;int a,b,c;a=x;b=x;c=x;
        while(a--){cout<<"*";}
        cout<<endl;
        x=x-2;
        while(x--)
        {
            while(b--){if(b==c-1||b==0)cout<<"*";else cout<<" ";}
            cout<<endl;b=c;
        }
        a=c;
        while(a--){cout<<"*";}
        cout<<endl;

    return 0;
}
