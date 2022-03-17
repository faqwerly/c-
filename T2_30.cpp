/*这是一个多行注释
*文件名：T2_30cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.6
*学院：School of Computer Information and Engineering
*功能：身体质量指数计算器
*/#include <iostream>

 using namespace std;

 int main()
 {
 int a,b,c,d,e;
    cout<<"每天开的总英里数： "<<endl;
    cin>>a;
    cout<<"每加仑汽油的价格： "<<endl;
	cin>>b;
	cout<<"每加仑汽油可以开的平均英里数： "<<endl;
	cin>>c;
	cout<<"每日的停车费： "<<endl;
	cin>>d;
	cout<<"每日的通行费： "<<endl;
	cin>>e;
	cout<<"每日所花费： "<<c*a/b+d+e;
 	return 0;
 }
1
