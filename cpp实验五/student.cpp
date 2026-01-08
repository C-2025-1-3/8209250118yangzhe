#define _CRT_SECURE_NO_WARNINGS  // 先禁用strcpy警告
#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

// 实现默认构造函数
Student::Student() {}

// 实现带参数构造函数
Student::Student(int n, const char* nm, char s) {
    num = n;
    strcpy_s(name, sizeof(name), nm);
    sex = s;
}

// 实现display
void Student::display() {
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}

// 实现set_value
void Student::set_value(int n, const char* nm, char s) {
    num = n;
    strcpy_s(name, sizeof(name), nm);
    sex = s;
}