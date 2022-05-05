/*这是一个多行注释
*文件名：T6_35.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：猜数字游戏的修改器 
*/#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main()
{
	srand(time(0));
	int n,m;
	int cnt=0; 
	n=rand()%1000+1;
	cout<<"I have anumber between 1 and 1000";
	cout<<"Can you guess my number?";
	cout<<"Please type your first guess\n";
	while(cin>>m)
	{
		if(m>n) 
		{
			cout<<"Too high.Try again.\n";
			cnt++;
		}
		else if(m<n)
		{
			cout<<"Too low.Try again\n";
			cnt++;
		}
		else
		{
			cnt++;
			break;
		}
	}
	if(cnt<10)cout<<"Either you know the secret or you got lucky!";
	else if(cnt==10) cout<<"Ahah!You know the secret!";
	else  cout<<"You should be able to do better!";
	return 0;
}
