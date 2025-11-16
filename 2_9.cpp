#include<iostream>
using namespace std;
int main()
{
	
	float n = 2, cost2=0, cost1,day=0,average;
	for (; n <= 100; ++day)
	{
		cost1 = 0.8 * n;
		n = 2 * n;
		cost2 = cost2 + cost1;

	}
	average = cost2 / day;
	cout << average << endl;


	return 0;
}
