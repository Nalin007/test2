#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	string name[4];
	int num[4],i;
	float total = 0;
	for(int i = 0 ; i < 4 ; i++)
	{
		cout << "Enter name ["<< i <<"] : ";
		cin >> name[i];
		cout << "Enter num ["<< i <<"] : ";
		cin >> num[i];
	}
	cout <<"----------------------" << endl;
	//for(i=0;i<4;i++)
		//num[i] = 2*num[i];
	cout << "Name \t\t" << "score\n";
	cout <<"----------------------" << endl;
	for(i=0;i<4;i++)
	{	cout << name[i] <<"\t\t "<< num[i] <<endl;
		total += num[i];
	}		
	cout <<"----------------------" << endl;
	
	cout << "Average score = " << fixed <<setprecision(2);
	cout << total/i << endl;
	return 0;
}