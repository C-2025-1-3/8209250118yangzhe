#include<iostream>
using namespace std;
class student {
public:
	int id;
	int score;
};
student* max(student* arr, int n)
{
	student* maxstu = arr;
	for (int i = 1; i < n; i++)
	{
		if (arr[i].score > maxstu->score){
			maxstu = &arr[i];
		}
	}
	return maxstu;
}
int main() {
	student stuarr[5]= {
		{101, 85},
		{102, 92},
		{103, 78},
		{104, 95},
		{105, 88}
	};
	student* top = max(stuarr, 5);
	cout << top->id << endl;
}