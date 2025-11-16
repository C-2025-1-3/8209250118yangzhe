#include<iostream>
using namespace std;
int main()
{
	float a,b,c,C;
	cout << "输入边长" << endl;
	cin >> a>>b>>c;
	if (a + b > c && a + c > b && b + c > b)
	{
		if (a == b or a == c or b == c)
		{
			C = a + b + c;
			cout << "是等腰三角形" << endl;
		}
		else {
			C = a + b + c;
			cout << "不是等腰三角形" << endl;
		}
		cout << "周长是：" << C << endl;
	}
	else cout << "不是三角形" << endl;
	return 0;


}