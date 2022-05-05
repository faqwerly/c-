/*ÕâÊÇÒ»¸ö¶àĞĞ×¢ÊÍ
*ÎÄ¼şÃû£ºT6_16.cpp
*×÷Õß£ºYitong Han
*ÓÊÏä£ºH2101870137@163.com
*ÈÕÆÚ£º2022.4.14
*Ñ§Ôº£ºSchool of Computer Information and Engineering
*¹¦ÄÜ£ºÊı×Ö·ÖÀë 
*/#include  <iostream>
using namespace std;
int app(int a)//cµÄÊµÏÖµ
{
	for(int i=100000;i>=10;i=i/10)
	{
	cout<<a%i/(i/10)<<" "; 
	}
}
int main()
{

    int a,b;

	cin>>a>>b;
	cout<<a/b<<endl;//aµÄÊµÏÖ
	cout<<a%b<<endl;//bµÄÊµÏÖ
    app(a);
} 
