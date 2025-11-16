#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	float a;
	cout << "输入a：" << endl;
	cin >> a;
	float x1 = a, x2;
	float x11;
    if (a < 0)
        cout << "a不能为负数" << endl;

    else {
        do {
            x2 = 0.5 * (x1 + (a / x1));
            x11 = fabs(x1 - x2);
            x1 = x2;
        } while (x11 >= 1e-5);
        cout << "sqrt(" << x2 << ") = " << fixed << setprecision(6) << x2 << endl;
    }
	return 0;

}
/*include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    float a;
    cout << "输入a：" << endl;
    cin >> a;

    // 异常处理：避免负数开平方
    if (a < 0) {
        cout << "错误：负数不能开平方！" << endl;
        return 1;
    }

    float x1 = a;  // 初始值
    float x2;
    float x11;     // 两次迭代的差值

    do {
        x2 = 0.5 * (x1 + a / x1);  // 牛顿迭代公式（1.0/2 简化为 0.5）
        x11 = fabs(x1 - x2);       // 计算差值
        x1 = x2;                   // 关键：用新值x2更新x1，否则循环无限
    } while (x11 >= 1e-5);         // 循环条件：差值大于等于精度要求

    // 输出结果（保留6位小数，美观且符合精度要求）
    cout << "sqrt(" << a << ") = " << fixed << setprecision(6) << x2 << endl;
    return 0;
}*/