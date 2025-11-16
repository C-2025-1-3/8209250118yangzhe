#include<iostream>
using namespace std;
int main()
{
    float x, y;
    cout << "输入x：" << endl;
    cin >> x;
    if (x > 0 && x < 10) {  
        if (x < 1) {
            y = 3 - 2 * x;
        }
        else if (x < 5) {
            y = 2 / (4 * x) + 1;
        }
        else {
            y = x * x;
        }
        cout << "结果是：" << y << endl;  
    }
    else {
        cout << "该数不在定义域内" << endl;
    }
    return 0;
}