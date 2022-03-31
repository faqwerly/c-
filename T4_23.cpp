/*这是一个多行注释
*文件名：T4_23.cpp
*作者：Yitong Han
*邮箱：H2101870137@163.com
*日期：2022.3.19
*学院：School of Computer Information and Engineering
*功能：摇摆问题 
*/
 #include <iostream>

 using namespace std;

 int main()
 {
     int x1=9,y1=11,x2=11,y2=9;
     cout << "a)-------------" << endl;
     if(x1<10)
     {
         if(y1>10)
         {
             cout << "*****" << endl;
         }
         else
         {
             cout << "#####" << endl;
         }
     }
     cout << "$$$$$" << endl;
     cout << "\n";
     cout << "b)-------------" << endl;
     if(x2<10)
     {
         if(y2>10)
         {
             cout << "*****" << endl;
         }
     }
     else
     {
         cout << "#####" << endl;
         cout << "$$$$$" << endl;
     }
     return 0;
 }

