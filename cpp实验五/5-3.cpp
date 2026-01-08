#include<iostream>
using namespace std;
class chang {
public:
	float V();
	void cin1();
	void cout1();
private:
	float x, y, z,v;

};

void chang::cin1() {
	cin >> x >> y >> z;
}
float chang::V()
{
	v=x*y*z;
	return v;
}
void chang::cout1() {
	cout << v << endl;
}
int main()
{
	chang c1, c2, c3;
	c1.cin1();
	c2.cin1();
	c3.cin1();
	cout << "第1个长方柱的体积：" << c1.V() << endl;
	cout << "第2个长方柱的体积：" << c2.V() << endl;
	cout << "第3个长方柱的体积：" << c3.V() << endl;
}