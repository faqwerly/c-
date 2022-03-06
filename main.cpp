//注释:分为两种，单行注释，多行注释

/* 这是一个多行注释
 *
 * FileName: main.cpp
 * Author:   Yonghang Yan
 * E-mail:   feifanyyh@163.com
 * Date:     Mar 4th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Just print a "Hello, World!" to screen
 */

// 凡是以#开头的都叫做宏指令，include表示引入一个文件，此处后面是<>表示
// 引入的是系统头文件,如果是用户定义的头文件，要用""来包含。
// iostream表示输入输出流，i代表input，o代表output
// 为什么要包含此条宏指令呢？这是因为要在程序中引入标准输入输出流头文件，
// 使用标准输入输出流文件中的输入流对象cout
#include <iostream>

// using是一个保留字，表示使用标准名字空间std
using namespace std;

// 这是main函数，表示C++程序的入口点，有且仅有一个
int main() // int表示main函数的返回值，通常返回0，表示程序正常结束，
// 返回大于0的整数，表示程序异常结束。（）表示main是一个函数

{//main函数的开始

    // cout就是标准输出流对象 << 表示流插入运算符，"Hello, World!"
    // 双引号括起来的表示一个字符串，通常会在屏幕上原样显示，endl表示回车换行
    // ;表示语句的结束，任何一条C++语句最后必须有一个;
    cout << "Hello world!" << endl;

    // return表示返回语句，0表示该程序运行结束向操作系统如Windows返回一个一个值0
    return 0;
}//main函数的结束
