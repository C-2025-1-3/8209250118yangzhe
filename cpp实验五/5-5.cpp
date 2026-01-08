#include<iostream>
using namespace std;
class point {
private:
	int x, y;
public:
	void setpoint(int i, int j);
	void display();
};
void point::setpoint(int i, int j)
{
	
	i += 60;
	j += 80;
	x = i;
	y = j;
}
void point::display()
{
	cout << "(" << x << "," << y << ")" << endl;
}
int main()
{
	point a1;
	a1.setpoint(20, 30);
	cout << "before:(20,30)" << endl;
	cout << "after:";
	a1.display();
}