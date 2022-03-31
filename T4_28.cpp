/*这是一个多行注释
*文件名：T4_28.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.19
*学院：School of Computer Information and Engineering
*功能：星号棋盘式图案 
*/#include <iostream>

using namespace std;

int main()
{
    int a=8,b=8;
    do
    {
        if(a%2==0)
        {
            while(b--){cout<<"*";cout<<" ";}
            cout<<endl;b=8;
        }
        else{
            while(b--){cout<<" ";cout<<"*";}
            cout<<endl;b=8;
        }

    }while(a--);

    return 0;
}
