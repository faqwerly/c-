/*这是一个多行注释
*文件名：T6_59.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.4.14
*学院：School of Computer Information and Engineering
*功能：计算机辅助教学：监控学生表现 
*/#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int questionCreating(int &a,int &b)
{
	
	a=rand()%50;
	b=rand()%50;
	cout<<"How much is "<<a<<" times "<<b<<endl;
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
			cout<<"No.Keep trying>"<<endl;
			break;
	}	
}
int main()
{
	int a,b;
	int c;
	int cntAll=0,cntyes=0;
	srand(time(0));
	while(questionCreating(a,b))
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
		if(n==a*b)
		{
			cntAll++;cntyes++;
			yesTips(rand()%4);
			continue;
		}
		while(n!=a*b)
		{
			cntAll++;
			noTips(rand()%4);
			cin>>n;
			if(n==a*b)
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
