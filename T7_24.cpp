/*
*FileName:   T7_24.cpp
*Author:     韩艺侗
*E-mail:     2101870137@qq.com
*Date:       2022.4.16
*College:    School of Computer Science and Information Engineering
*Function:   八皇后问题。
*/
#include <iostream>
using namespace std;

int c[20], n = 8, cnt = 0;
void print() //输出放置后的八皇后棋盘
{

    for (int i = 0; i < n; ++i) //四皇后为例：输出2413  3142
    {
        for (int j = 0; j < n; ++j)
        {
            if (j == c[i]) cout << "1 \t";
            else cout << "0 \t";
        }
        cout << endl;
    }
    cout << endl;
}
void search(int r)
{
    if (r == n)   
    {
        print();
        ++cnt;
        return;
    }
    for (int i = 0; i < n; ++i) // 1302 2013 
    {
        c[r] = i;
        int ok = 1;
        for (int j = 0; j < r; ++j)
        {
            if (c[r] == c[j] || r - j == c[r] - c[j] || r - j == c[j] - c[r])
            {
                ok = 0;
                break;
            }
        }
        if (ok) search(r + 1);
    }
}
int main()
{
    search(0);
    cout << cnt << endl;
    return 0;
}
