// 502main.cpp - 主函数模块
#include <iostream>
#include "502student.h"
using namespace std;

int main()
{
    Student stud;  // 定义对象

    // 使用新增加的set_value函数设置值
    stud.set_value(7, "tcg", 'm');

    stud.display();  

    return 0;
}