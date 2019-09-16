#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> n[i][j] ;
		}
	}
	cout << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << n[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 2; i++)
		{
			cout << n[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	
	return 0;
}