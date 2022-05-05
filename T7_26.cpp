/*
*FileName:   T7_26.cpp
*Author:     韩艺侗
*E-mail:     2101870137@qq.com
*Date:       2022.4.16
*College:    School of Computer Science and Information Engineering
*Function:   骑士巡游问题：封闭巡游测试。
*/
#include<iostream>
#include<cmath>
int boa[8][8] = { 0 };
int i = 0;
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

void move(int x, int y)
{
    if (64 == i)
        return;
    if (!(isOut(x, y)) && !(isVisited(x, y)))
    {
        i++;
        boa[x][y] = i;
        move(x + 2, y + 1);
        move(x + 1, y + 2);
        move(x - 1, y + 2);
        move(x - 2, y + 1);
        move(x - 2, y - 1);
        move(x - 1, y - 2);
        move(x + 1, y - 2);
        move(x + 2, y - 1);
        return;
    }
    else
    {
        return;
    }
}
int main()
{
    int x, y,m,n;
    cout << "请输入起始位置（行 列从0开始，中间空格隔开）: " << endl;
    cin >> x >> y;
    move(x, y);
    for (int j = 0; j < 8; ++j)
    {
        for (int k = 0; k < 8; ++k)
        {
            cout << boa[j][k] << "\t";
            if (64 == boa[j][k]) { m = j, n = k; }
        }
        cout << endl;
    }
    if ((2 == fabs(m - x) && 1 == fabs(n - y)) || (1 == fabs(m - x) && (2 == fabs(n - y))))
        cout << "是封闭巡游" << endl;
    else cout << "不是封闭巡游" << endl;
    return 0;

}
