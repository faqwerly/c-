/*这是一个多行注释
*文件名：T5_20.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.26
*学院：School of Computer Information and Engineering
*功能 ：毕达哥斯拉的三元值 
*/
#include<bits/stdc++.h>

using namespace std;

int const N = 500;

int sum;
int ans[N],cnt;

int sqr_t(int a,int b)
{
	return sqrt(a*a + b*b);
}

int main()
{
	for(int i = 1; i < N; i ++ )
	{
		for(int j = i; j < N; j ++ )
		{
			int m = sqr_t(i,j);
			if(m < N && m*m == i*i + j*j)
			{
				cout << i << " " << j << " " << m << endl;
				ans[++ cnt] = m;
			}
		}
	}
	
	cout << cnt << endl;
//	for(int i = 1; i <= cnt; i ++ ) cout << ans[i] << endl; 
} 
