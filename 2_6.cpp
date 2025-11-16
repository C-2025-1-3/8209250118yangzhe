#include <iostream>
using namespace std;

int main() {
    
    int a, b;

    
    cout << "请输入第一个正整数：";
    cin >> a;
    cout << "请输入第二个正整数：";
    cin >> b;

    
    int original_a = a;
    int original_b = b;

    
    while (b != 0) {
        int temp = b; 
        b = a % b;     
        a = temp;      
    }

   
    int gcd = a;


    int lcm = (original_a * original_b) / gcd;

    
    cout << "最大公约数（GCD）：" << gcd << endl;
    cout << "最小公倍数（LCM）：" << lcm << endl;

    return 0;
}