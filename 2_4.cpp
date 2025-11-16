#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    // 输入第一个数、运算符、第二个数
    cout << "请输入第一个数: ";
    cin >> num1;
    cout << "请输入运算符(+、-、*、/、%): ";
    cin >> op;
    cout << "请输入第二个数: ";
    cin >> num2;

    // 根据运算符进行不同运算，并处理异常情况
    switch (op) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "错误：除数不能为0！" << endl;
        }
        else {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        break;
    case '%':
        // 取模运算要求操作数为整数，这里先判断是否为整数
        if ((num1 - (int)num1) != 0 || (num2 - (int)num2) != 0) {
            cout << "错误：取模运算要求操作数为整数！" << endl;
        }
        else if (num2 == 0) {
            cout << "错误：除数不能为0！" << endl;
        }
        else {
            cout << (int)num1 << " % " << (int)num2 << " = " << (int)num1 % (int)num2 << endl;
        }
        break;
    default:
        cout << "错误" << endl;
    }

    return 0;
}