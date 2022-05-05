/*这是一个多行注释
*文件名：T6_61.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：计算机辅助教学：问题分类 
*/#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int questionCreating(int &a,int &b,int &result)
{
	
	int mark=1;
	int level=0,value=0,type=0;
	while(!level)
	{
		cout<<"Please choose the difficult level(1 or 2):"<<endl;
		cin>>level;
		if(level==1||level==2)
		{
			break;
		}
		else
		{
			cout<<"You input a wrong level!Input again." <<endl;
			level=0;
		}
	}
	switch(level)
	{
		case 1:
			value=10;
			break;
		case 2:
			value=100;
			break;
	}
	a=rand()%value;
	b=rand()%value;
	
	while(!type)
	{
		cout<<"Please choose the type of question:"<<endl
			<<"1 是加法；2是减法；3是乘法；4是除法；5是随机。"<<endl;
		cin>>type;
		if(type<6&&type>0)
		{
			break;
		}
		else
		{
			cout<<"You input a wrong type!Input again." <<endl;
			type=0;
		}
	}
	while(mark)
	{
		switch(type)
		{
			case 1:
				cout<<"You choose the Addition(+)."<<endl;
				cout<<"How much is "<<a<<" adds up "<<b<<"?"<<endl;
				result=a+b;
				mark=0;
				break; 
			case 2:
				cout<<"You choose the Subtraction(-)."<<endl;
				cout<<"How much is "<<a<<" subtracts "<<b<<"?"<<endl;
				result=a-b;
				mark=0;
				break;
			case 3:
				cout<<"You choose the Multiplication(*)."<<endl;			
				cout<<"How much is "<<a<<" multiplicates "<<b<<"?"<<endl;
				result=a*b;
				mark=0;
				break; 
			case 4:
				cout<<"You choose the Division(/)."<<endl;
				cout<<"How much is "<<a<<" divided by "<<b<<"?"<<endl;
				result=a/b;
				mark=0;
				break;
			case 5: 
				type=rand()%5+1;
				mark=1;
		}
	}
	
	return 1;
}

void yesTips(int c)
{
	switch(c)
	{
		case 0:
			cout<<"Very good!"<<endl;
			break;
		case 1:
			cout<<"Excellent!"<<endl;
			break;
		case 2:
			cout<<"Nice work!"<<endl;
			break;
		default :
			cout<<"Keep up the good work!"<<endl;
			break;
	}
	cout<<endl;
}
void noTips(int c)
{
	switch(c)
	{
		case 0:
			cout<<"Wrong.Try once more."<<endl;
			break;
		case 1:
			cout<<"No.Please try again."<<endl;
			break;
		case 2:
			cout<<"Don't give up!"<<endl;
			break;
		default :
			cout<<"No.Keep trying."<<endl;
			break;
	}	
}
int main()
{
	int a=0,b=0;
	int c,result;
	int cntAll=0,cntyes=0;
	srand(time(0));
	while(questionCreating(a,b,result))
	{
		if(cntAll==10)
		{
			if(1.0*cntyes/cntAll<0.75)
			{
				cout<<"Please ask your teacher for extra help."<<endl;
				cntAll=0;cntyes=0;
				continue;
			}
			else
			{
				cout<<"Congratulations,you are ready to the next level!";
				cntAll=0;cntyes=0;
				continue;
			 } 
		}
		cout<<"Please input your answer："<<endl;
		int n;
		cin>>n;
		if(n==result)
		{
			cntAll++;cntyes++;
			yesTips(rand()%4);
			continue;
		}
		while(n!=result)
		{
			cntAll++;
			noTips(rand()%4);
			cin>>n;
			if(n==result)
			{
				cntAll++;cntyes++;
				yesTips(rand()%4);
				break;
			}
			else
			{
				continue;
			} 
		}
	}
	return 0;
}
