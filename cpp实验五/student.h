#ifndef STUDENT_H
#define STUDENT_H

class Student {
public:
    // 1. 声明默认构造函数（仅声明，不实现）
    Student();

    // 2. 声明带参数构造函数（仅声明）
    Student(int n, const char* nm, char s);

    void display();
    void set_value(int n, const char* nm, char s);
private:
    int num;
    char name[20];
    char sex;
};

#endif