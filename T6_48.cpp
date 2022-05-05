/*这是一个多行注释
*文件名：T6_48.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：跑双筛子游戏的改进 
*/#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

unsigned int rollDice();
int inputWager(unsigned int x);
unsigned int gamePlaying(int x,unsigned int y);


int main()
{
	unsigned int bankBalance=1000;
	int wager;
	
	while(wager=inputWager(bankBalance))
	{
		bankBalance=gamePlaying(wager,bankBalance);
	}
	return 0;
}

unsigned int gamePlaying(int x,unsigned int y)
{
	int wager=x;
	unsigned int bankBalance=y;
	enum Status {CONTINUE,WON,LOST};
	srand(static_cast<unsigned int>(time(0)));
	unsigned int myPoint=0;
	Status gameStatus=CONTINUE;
	unsigned int sumOfDice=rollDice();
	
	switch(sumOfDice)
	{
		case 7:
		case 11:
			gameStatus=WON;
			break;
		case 2:
		case 3:
		case 12:
			gameStatus=LOST;
			break;
		default :
			gameStatus=CONTINUE;
			myPoint=sumOfDice;
			cout<<"Point is"<<myPoint<<endl;
			break;
	}	
	
	while(CONTINUE==gameStatus)
	{
		sumOfDice=rollDice();
		if(sumOfDice==myPoint)
			gameStatus=WON;
		else
			if(sumOfDice==7)
				gameStatus=LOST;
	}
	
	if(WON==gameStatus)
	{
		cout<<"Player wins"<<endl;
		bankBalance+=wager;
		cout<<"You're up big.Now's the time to cash in your chips!"<<endl;
		cout<<"From now on,bankBalance becomes "<<bankBalance<<endl;
	}
		
	else
	{
		cout<<"Player loses"<<endl; 
		bankBalance-=wager;
		cout<<"Oh,you're going to broke,huh?"<<endl;
		cout<<"From now on,bankBalance becomes "<<bankBalance<<endl;
		if(bankBalance==0)
		{
			cout<<"Sorry,you busted!"<<endl;
		}
	}
	return bankBalance;
}

int inputWager(unsigned int x)
{
	unsigned int bankBalance=x;
	unsigned int wager=0;
	cout<<"You should input your wager(<=bankBlance):"<<endl;
	while(cin>>wager)
	{
		if(wager<=bankBalance)
		{
			cout<<"Your wager is"<<wager<<endl;
			break;
		}
		else 
		{
			cout<<"Your wager should less than the bankBalance,you should input wager again."<<endl;
		}
	}
	return wager;
}

unsigned int rollDice()
{
	unsigned int die1=1+rand()%6;
	unsigned int die2=1+rand()%6;
	unsigned int sum=die1+die2;
	cout<<"Player rolled"<<die1<<"+"<<die2
	<<"="<<sum<<endl;
	return sum;
}
