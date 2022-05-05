/*
*FileName:   T7_23.cpp
*Author:     韩艺侗
*E-mail:     2101870137@qq.com
*Date:       2022.4.16
*College:    School of Computer Science and Information Engineering
*Function:   骑士巡游：蛮力解决。
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
int boa[8][8] = { 0 };
int i = 1;
using namespace std;
bool isOut(int x, int y)//判断是否超过棋盘
{
    if (x >= 0 && x <= 7 && y >= 0 && y <= 7)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool isVisited(int x, int y)//判断是否被访问过
{
    if (boa[x][y] != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
	
	srand(static_cast<unsigned int>(time(0)));
	int hor[8] = { 2,1,-1,-2,-2,-1,1,2 };
	int ver[8] = { -1,-2,-2,-1,1,2,2,1 };
    int x, y;
    cout << "请输入起始位置（行 列从0开始，中间空格隔开）: " << endl;
    cin >> x >> y;
    int a = x, b = y;
    boa[x][y] = 1;
    while (i <= 64)
    {
        unsigned int num = rand() % 8;
        x += ver[num];
        y += hor[num];
        if (!(isOut(x, y)) && !(isVisited(x, y)))
        {
            ++i;
            boa[x][y] = i;
        }
        else
        {
            //break;
            i = 1;
            x = a, b = y;
        }
    }
    for (int j = 0; j < 8; ++j)
    {
        for (int k = 0; k < 8; ++k)
        {
            cout << boa[j][k] << "\t";
        }
        cout << endl;
    }
	return 0;
}
