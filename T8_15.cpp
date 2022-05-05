/*
*FileName:   T8_15.cpp
*Author:     韩艺侗
*E-mail:     2101870137@qq.com
*Date:       2022.4.11
*College:    School of Computer Science and Information Engineering
*Function:   机器语言编程 
*/#include<iostream>
using namespace std;

int arr[100] = { 0 };
int h, l;//高二位：指令  低两位：地址
int ad=0;//累加器

	

void sml()
{
	int num = 0;
	for (int i = 0; i < 100; ++i)
	{
		h = arr[i] / 100;
		l = arr[i] % 100;
		//read
		
			if (10 == h)
			{
				cout << "请输入数字： " << endl;
				cin >> num;
				arr[l] = num;
			}
			//write
			else if (11 == h)
			{
				cout << arr[l] << endl;
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
				ad /= arr[l];
			}
			//multiply
			else if (33 == h)
			{
				ad *= arr[l];
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
		
	}
}

int main()
{
	while (1)
	{
		cout << "请选择： 1.问题a   2.问题b   3.问题c   0:退出" << endl;
		int s;
		cin >> s;
		if (0 == s)break;
		else if (1 == s)
		{
			arr[0] = 1050;//读入数字 放入地址50
			arr[1] = 4450;//是负数终止
			arr[2] = 3050;//载入累加器相加
			arr[3] = 2150;//累加器结果存入50；
			arr[4] = 1150;//打印和
			arr[5] = 4000;//循环
			sml( );
			
		}
		else if (2 == s)
		{
			
			cout << "读入的总数字有几个： " << endl;
			cin >> arr[60];
			arr[62] = arr[60];
			arr[0] = 2050;//50放入累加器
			arr[1] = 1050;//50读入数字
			arr[2] = 3050;//50载入累加器相加
			arr[3] = 2150;//相加后放入50
			arr[61] = 1;//递减用
			arr[4] = 2060;//60存入累加器
			arr[5] = 3161;//递减
			arr[6] = 2160;//递减后的值存入60
			arr[7] = 4209;//累加器为0转入09
			arr[8] = 4000;//循环
			arr[9] = 2050;//求平均值
			arr[10] = 3262;
			arr[11] = 2150;//平均值放入50
			arr[12] = 1150;//打印平均数
			arr[13] = 4300;//终止
			sml();
		}
		else if (3 == s)
		{
			cout << "一共有多少个数字： " << endl;
			cin >> arr[60];
			arr[61] = 1;
			arr[0] = 2060;//60载入累加器
			arr[1] = 4212;//累加器为0 转入12
			arr[2] = 1050;//读入数字放入50；
			arr[51] = arr[50];//51 最大值
			arr[3] = 2060;//60存入累加器
			arr[4] = 3161;//递减
			arr[5] = 2160;//递减后的值存入60
			arr[6] = 2051;//51放入累加器
			arr[7] = 3150;//更新最大值
			arr[8] = 4109;
			arr[9] = 2050;
			arr[10] = 2151;
			arr[11] = 4000;
			arr[12] = 1151;//打印最大值
			arr[13] = 4300;
			sml();
		}
	}
	return 0;
}
