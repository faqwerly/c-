/*这是一个多行注释
*文件名：T6_55.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：C++的随机数：抛双骰子游戏的改进 
*/#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>
using namespace std;

unsigned int rollDice();
default_random_engine engine(static_cast<unsigned int>(time(0)));
uniform_int_distribution<unsigned int> randomInt(1,6);

int main()
{
	enum Status {CONTINUE,WON,LOST};
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
		cout<<"Player wins"<<endl;
	else
	cout<<"Player loses"<<endl; 
	return 0;
}

unsigned int rollDice()
{
	unsigned int die1=randomInt(engine);
	unsigned int die2=randomInt(engine);
	unsigned int sum=die1+die2;
	cout<<"Player rolled"<<die1<<"+"<<die2
	<<"="<<sum<<endl;
	return sum;
}

