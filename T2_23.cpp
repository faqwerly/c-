/*这是一个多行注释
*文件名：T2_23.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.6
*学院：School of Computer Information and Engineering
*功能：输入五个数，找到最大值和最小值
*/#include <iostream>
using namespace std;
int main ()
{
    int a[5];
	int min,max;
	for(int i=0;i<5;i++)
		cin >> a[i];
	max=a[0];min=a[0];
	for(int i=0;i<5;i++){
		int temp;
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	cout << min << " " << max <<endl;
	return 0;

}
