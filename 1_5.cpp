#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float c, f;
	cout << "请输入华氏温度："<<endl ;
	cin >> f;
	c = (f - 32.0) * (5.0 / 9.0);

	cout << "摄氏温度是："<<fixed<<setprecision(2)<<c << endl;
	return 0;

}