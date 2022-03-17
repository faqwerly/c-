/*这是一个多行注释
*文件名：T2_28cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.6
*学院：School of Computer Information and Engineering
*功能：将输入的一个五位整数每个位上的数字输出出来
*/#include <iostream>
using namespace std;
int main()
{
    char num[6];
    cin>>num;
    for(int i=0;i<5;i++){
        cout<<num[i]<<" ";
    }
}
