#include<iostream>
using namespace std;
int main()
{
	cout << "请输入一行字符（按回车结束）：" << endl;
	char c;
	int english = 0, num = 0, space = 0, other = 0;
	while (cin.get(c)) {
		if (c == '\n')
		{
			break;
		}
		else if (c >= 'a' && c <= 'z' or c >= 'A' && c <= 'Z')
		
			english++;
		else if (c == ' ')
			space++;
		else if (c >= '0' && c <= '9')
			num++;
		else {
			other++;

		}
		}
	cout << "\n统计结果：" << endl;
	cout << "英文字母个数：" << english << endl;
	cout << "空格个数：" << space << endl;
	cout << "数字字符个数：" << num << endl;
	cout << "其他字符个数：" << other << endl;
	

}
