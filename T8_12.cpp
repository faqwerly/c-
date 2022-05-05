/*
*FileName:   T8_12.cpp
*Author:     º«ÒÕ¶±
*E-mail:     2101870137@qq.com
*Date:       2022.4.11
*College:    School of Computer Science and Information Engineering
*Function:   ¹êÍÃÈüÅÜÄ£Äâ
*/#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void print(int t,int h)
{

	for (int i = 1; i <= 70; i++)
	{
		cout << i << "\t";
		if (t == i&& h ==i)cout << "OUCH!!!!" << endl;
		else if (t == i)cout << "T" << endl;
		else if (h == i)cout << "H" << endl;
		else cout << endl;
	}
}
int main()
{
	srand(time(NULL));
	int t = 1, h = 1,n;
	int arrt[10] = { 3,3,3,3,3,-6,-6,1,1,1 };
	int arrh[10] = { 0,0,9,9,-12,1,1,1,-2,-2 };
	cout << "BANG!!!!" << endl;
	cout << "They're off!!!!" << endl;
	while (t <= 70 && h <= 70)
	{
		if (t < 1)t = 1;
		if (h < 1)h = 1;
		n = rand() % 10 ;
		t += arrt[n];
		h += arrh[n];
		print(t,h);
		cout << endl;
	}
	if (t >=70&&h<70)cout << "TORTOLSE WINS!!!YAY!!!" << endl;
	else if (t<70&&h>=70)cout << "Hare wins.Yuch." << endl;
	else  if(t>=70&&h>=70)cout << "It's a tie." << endl;
	return 0;
}
