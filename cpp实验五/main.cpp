#include <iostream>
#include "student.h"

using namespace std;

int main() {
    Student stud;
    stud.set_value(1001, "ZhangSan", 'M');
    stud.display();

    Student stud1(007, "tcg", 'm');
    stud1.display();

    return 0;
}