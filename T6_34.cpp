/*这是一个多行注释
*文件名：T6_34.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：猜数字游戏 
*/#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main()
{
	srand(time(0));
	int n,m;
	n=rand()%1000+1;
	cout<<"I have anumber between 1 and 1000";
	cout<<"Can you guess my number?";
	cout<<"Please type your first guess\n";
	while(cin>>m)
	{
		if(m>n) cout<<"Too high.Try again.\n";
		else if(m<n) cout<<"Too low.Try again\n";
		else
		{
			cout<<"Excellent!You guessed the number!\nWould you like to play again(y or n)";
			break;
		}
	}
	return 0;
}
