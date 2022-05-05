/*
*FileName:   T8_17.cpp
*Author:     韩艺侗
*E-mail:     2101870137@qq.com
*Date:       2022.4.11
*College:    School of Computer Science and Information Engineering
*Function:   Simpletron模拟程序的改进 
*/#include<iostream>
using namespace std;
int arr[1000] = { 0 };
int h, l;//高二位：指令  低两位：地址
int ad = 0;//累加器
void sml()
{

	int num = 0, f = 0;
	for (int i = 0; i < 100; ++i)
	{
		h = arr[i] / 100;
		l = arr[i] % 100;
		//read
		if (10 == h)
		{
			cout << "请输入数字： " << endl;
			while (1)
			{
				if (num >= -9999 && num <= 9999)break;
				else cout << "输入有误，请重新输入：　" << endl;
			}
			arr[l] = num;
		}
		//write
		else if (11 == h)
		{
			cout << arr[l] << endl;
		}
		//换行符
		else if (12 == h)
		{
			cout << endl;
		}
		//load
		else if (20 == h)
		{
			ad = arr[l];
		}
		//store
		else if (21 == h)
		{
			arr[l] = ad;
		}
		//add
		else if (30 == h)
		{
			ad += arr[l];
		}
		//subtract
		else if (31 == h)
		{
			ad -= arr[l];
		}
		//divide
		else if (32 == h)
		{
			if (0 == arr[l])
			{
				cout << "被除数不能为0！！！" << endl;
				break;
			}
			else ad /= arr[l];
		}
		//multiply
		else if (33 == h)
		{
			ad *= arr[l];
		}
		//求模运算    累加器为除数，arr【l】为被除数，求模后放入累加器
		else if (34 == h)
		{
			ad = ad - (ad / arr[l]) * arr[l];
		}
		//求幂运算    累加器为底数，arr【l】为幂，求模后放入累加器
		else if (35 == h)
		{
			int ad1 = ad;
			for (int i = 0; i < arr[l]; ++i)
			{
				ad *= ad1;
			}
		}
		//branch
		else if (40 == h)
		{
			i = l - 1;
		}
		//branchneg
		else if (41 == h)
		{
			if (ad < 0)i = l - 1;
		}
		//branchzero
		else if (42 == h)
		{
			if (0 == ad)i = l - 1;
		}
		//halt
		else if (43 == h)
		{
			break;
		}
		//判断其是否为负数，是负数结束
		else if (44 == h)
		{
			if (num < 0) { cout << "输入负数，终止！！！" << endl; break; }
		}
		if (ad < -9999 || ad>9999)cout << "累加器溢出！！！！" << endl;
	}
}

int main()
{
	cout << R"(***	 Welcome to Simpletron!  ***
***  Please enter your program one instrution  ***
***  (or date word)at a time. I will tupe the  ***
***  location number and a question mark(?).   ***
***  You then type the word for that location. ***
***  Type the sential -99999 to stop entering  ***
***  your program.  ***
)" << endl;
	int c;
	for (int i = 0; i < 1000; ++i)
	{
		if (i < 10)cout << "0";
		cout << i << " ?";
		cin >> c;
		if (-99999 == c)break;
		arr[i] = c;

	}
	cout << "***  Program loading completed  ***" << endl;
	cout << "***  Program execution begains  ***" << endl;
	sml();
	return 0;
}
