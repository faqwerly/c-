/*这是一个多行注释
*文件名：T2_26cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.6
*学院：School of Computer Information and Engineering
*功能：输出一个由星号组成的棋盘图案
*/#include <iostream>
using namespace std;
int main ()
{
    int i;
    for(int i=1;i<=8;i++){
    if(i%2!=0)
        cout<<"* * * * * * * * "<<endl;
    else cout<<" * * * * * * * * "<<endl;
    }
    return 0;
}
