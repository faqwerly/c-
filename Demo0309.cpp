/*
 * FileName: Demo0309.cpp
 * Author: Yonghang Yan
 * E-mail: feifanyyh@163.com
 * Date: Mar 9th, 2022
 * Function: Demonstrating the DataType of C++
 */

 /*
    C++数据类型分为基本类型（内建类型）和扩展类型
    基本类型：bool、char、int、float,double, long, long long, short, signed, unsigned, long double
    数据类型：定义了一组可以描述自然世界对应数据的方式以及一组定义在该数据集上的基本操作。
    有了数据类型，就可以定义改种类型的变量，用以存储该种类型的数据
    变量定义的格式： 数据类型 变量名(=初值);
  */

 #include <iostream>
 #include <limits>
 #include <float.h>
 #include <locale>

 using namespace std;

 int main()
 {
      /*
      *  C++的选择结构
      1, if单选结构
      if(表达式）
      {
         if语句体
      }

      2，if双选结构
      if(表达式)
      {
        逻辑序列1；
      }
      else
      {
        逻辑序列2；
      }
      */

      /*
       * C++的循环结构:所有的循环都具有四要素：初值，循环是否执行的判断条件，循环体，修改循环是否继续的值
       1、while
       while(表达式)
        {
            循环体；
        }

       */
    int weather;
    cout << "Input the weather of today: ";
    cin >> weather;

    int choice=1;

     while(choice) // while结构里有选择结构，叫做嵌套
     {

//         if(weather==1)
//            cout << "let's go climbing the XiangShang mountain!" << endl;
//         if(weather==0)
//            cout << "let's watch movie at home!" << endl;
        if(1==weather) // classic bug ==  =
            cout << "let's go climbing the XiangShang mountain!" << endl;
        else // 很容易出现else的悬挂问题
            cout << "let's watch movie at home!" << endl;

        cout << "Do you want to play this app again?(if you want input 1,or else input 0): ";
        cin >> choice;

        if(choice==1)
        {
            cout << "Input the weather of today: ";
            cin >> weather;
        }
        // 堆叠
        if(choice==0)
            cout << "Game over, see you again!" << endl;
    }



#if 0
     cout << "bool start***************************************************";
     bool b1; //变量的声明
     bool b2=true; // 变量的定义
     cout << "b1 = " << b1 << endl;
     cout << "b2 = " << b2 << endl;
     cout << "The address of variable b1 is : " << &b1 << endl; // &变量名表示取得一个变量的地址，&叫做取地址符
     cout << "The width of variable b1 is : " << sizeof(bool) << endl; //sizeof表示某种类型所占的内存地址宽度,此括号不能省略
     cout << "The width of variable b1 is : " << sizeof b1 << endl;
     cout << "bool end***************************************************";

     cout << "\n\nchar start***************************************************";
     char c1;
     char c2='c';
     cout << "c1 = " << c1 << endl;
     cout << "c2 = " << c2 << endl;

     // where is the bug? how to fix it.
     cout << "The address of variable c2 is : " << (void *)&c2 << endl; // &变量名表示取得一个变量的地址，&叫做取地址符
     cout << "The width of variable c1 is : " << sizeof(char) << endl; //sizeof表示某种类型所占的内存地址宽度,此括号不能省略
     cout << "The width of variable c1 is : " << sizeof c1 << endl;
     cout << "char end***************************************************";

     cout << "\nint begin***************************************************";
     int n1;
     int n2=2;
     cout << "n1 = " << n1 << endl;
     cout << "n2 = " << n2 << endl;
     cout << "The address of variable n2 is : " << &n2 << endl; // &变量名表示取得一个变量的地址，&叫做取地址符
     cout << "The width of variable n1 is : " << sizeof(int) << endl; //sizeof表示某种类型所占的内存地址宽度,此括号不能省略
     cout << "The width of variable n1 is : " << sizeof n1 << endl;
     cout << "The biggest value of datatype int is " << INT_MAX << endl;
     cout << "The smallest value of datatype int is " << INT_MIN << endl;
     cout << "\nint end***************************************************";

     float f1;
     float f2=1.1;
     cout << "f1 = " << f1 << endl;
     cout << "f2 = " << f2 << endl;
     cout << "The address of variable f2 is : " << &f2 << endl; // &变量名表示取得一个变量的地址，&叫做取地址符
     cout << "The width of variable f1 is : " << sizeof(float) << endl; //sizeof表示某种类型所占的内存地址宽度,此括号不能省略
     cout << "The width of variable f1 is : " << sizeof f1 << endl;
     cout << "The biggest value of datatype float is " << FLT_MAX << endl;
     cout << "The smallest value of datatype float is " << FLT_MIN << endl;

     double d1;
     double d2=2.2;
     cout << "d1 = " << d1 << endl;
     cout << "d2 = " << d2 << endl;
     cout << "The address of variable d2 is : " << &d2 << endl; // &变量名表示取得一个变量的地址，&叫做取地址符
     cout << "The width of variable d1 is : " << sizeof(double) << endl; //sizeof表示某种类型所占的内存地址宽度,此括号不能省略
     cout << "The width of variable d1 is : " << sizeof d1 << endl;
     cout << "The biggest value of datatype double is " << DBL_MAX << endl;
     cout << "The smallest value of datatype double is " << DBL_MIN << endl;
     cout << "The biggest value of datatype double is " << numeric_limits<double>::max() << endl;
     cout << "The smallest value of datatype double is " << numeric_limits<double>::min() << endl;

  #endif


     return 0;
 }

