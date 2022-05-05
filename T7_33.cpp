/*
*FileName:   T7_33.cpp
*Author:     º«ÒÕ¶±
*E-mail:     2101870137@qq.com
*Date:       2022.4.16
*College:    School of Computer Science and Information Engineering
*Function:   ??1?¡À¨¦¨¤¨²?¡ê
*/
#include<iostream>
using namespace std;



typedef struct zb
{
	int x;
	int y;
};
int f = 0;
void print(char arr[12][12])
{
	
	if ('x' == arr[4][11])f++;
	if (f > 1)return;
	for (int i = 0; i < 12; ++i)
	{
		for (int j = 0; j < 12; ++j)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void test(char arr[12][12], zb z)
{
	if ('#' == arr[z.x][z.y])return;
	if (11 == z.y)
	{
		arr[z.x][z.y] = 'x';
		print(arr);
		return;
	}
	if ('.' == arr[z.x][z.y])
	{
		arr[z.x][z.y] = 'x';
		print(arr);
		test(arr, { z.x + 1,z.y });
		test(arr, { z.x,z.y + 1 });
		test(arr, { z.x,z.y - 1 });
		test(arr, { z.x - 1, z.y});
	}
}

int main()
{
	char arr[12][12] = { {'#','#','#','#','#','#','#','#','#','#','#','#',},{'#','.','.','.','#','.','.','.','.','.','.','#',}, {'.','.','#','.','#','.','#','#','#','#','.','#',},{'#','#','#','.','#','.','.','.','.','#','.','#',}, {'#','.','.','.','.','#','#','#','.','#','.','.'} ,{'#','#','#','#','.','#','.','#','.','#','.','#'} ,{'#','.','.','#','.','#','.','#','.','#','.','#'}, {'#','#','.','#','.','#','.','#','.','#','.','#'} ,{'#','.','.','.','.','.','.','.','.','#','.','#'},{'#','#','#','#','#','#','.','#','#','#','.','#'},{'#','.','.','.','.','.','.','#','.','.','.','#'},{'#','#','#','#','#','#','#','#','#','#','#','#',}};
	zb z{ 2,0 };
	test(arr, z);

	return 0;
}
