#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:           // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void cin1();
	void cout1();
	void Settime(int h, int m, int s);
};
void Time::Settime(int h, int m, int s) {
	hour = h; minute = m; sec = s;
}
void Time::cin1()
{
	cin >> hour >> minute >> sec;
}
void Time::cout1()
{
	cout << hour << ": " << minute << ": " << sec << endl;
}
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.cin1();
	t1.cout1();
	return 0;
}
/*应设为私有的成员：数据成员（如hour、minute、sec）。理由：私有成员只能被类内部访问，避免外部直接修改数据，保证数据的安全性（封装性）。
应设为公有的成员：对外提供功能的成员函数（如inputTime()、showTime()）。理由：公有成员是类与外部交互的 “接口”，外部通过调用这些函数来操作类的私有数据。
三、函数定义位置分析
最好在类内定义的函数：短小、频繁调用的函数（如inputTime()、showTime()）。理由：类内定义的函数会被编译器默认视为inline（内联函数），可以减少函数调用的开销，提升效率。
最好在类外定义的函数：代码较长、逻辑复杂的函数。理由：类外定义可以避免类体过于臃肿，同时便于代码的维护和复用（只需在类内声明，类外实现）。*/