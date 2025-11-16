#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "ÇëÊäÈë×Ö·û" << endl;
	cin >> a;
	if (a >= 'a' && a<= 'z')
	{
		char A = a - 32;
		cout << A << endl;

	}
	else
	{
		int B = a;
		int b = B + 1;





		cout << b<<endl;

	}
	return 0;
}
