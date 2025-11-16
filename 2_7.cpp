#include<iostream>
using namespace std;
int main()
{
	int a=1;
	for (a; a < 6; ++a)
	{
		if (a == 1)
			cout << "*" << endl;
		else if (a == 2)
			cout << "**" << endl;
		else if (a == 3)
			cout << "***" << endl;
		else if (a == 4)
			cout << "****" << endl;
		else if (a == 5)
			cout << "*****" << endl;
		else break;
	}

}