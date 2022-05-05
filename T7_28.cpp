/*
*FileName:   T7_28.cpp
*Author:     º«ÒÕ¶±
*E-mail:     2101870137@qq.com
*Date:       2022.4.15
*College:    School of Computer Science and Information Engineering
*Function:   ?????¡ê
*/
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool testPalindrome(string A)
{
	string B = A;
	reverse(A.begin(), A.end());
	if (B == A)return true;
	return false;
}

int main()
{
	string a;
	cin >> a;
	if (testPalindrome(a))cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
