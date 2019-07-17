#include<iostream>
using namespace std;

int main()
{
	cout << "==============================" << endl;
	int g;
	cout << "Enter your grade : ";
	cin >> g;
	cout << "==============================" << endl;
	if (g > 100 )
	{
		cout << "ERROR" << endl;
	}
	else if (g >= 90 && g <= 100)
	{
		cout << "A" << endl;
	}
	else if (g >= 80 && g <= 89)
	{
		cout << "B" << endl;
	}
	else if (g >= 70 && g <= 79)
	{
		cout << "C" << endl;
	}
	else if (g >= 60 && g <= 69)
	{
		cout << "D" << endl;
	}
	else if (g >= 0 && g <= 59)
	{
		cout << "F" << endl;
	}
	else cout << "ERROR" << endl;
	cout << "==============================" << endl;

	return (0);
}
