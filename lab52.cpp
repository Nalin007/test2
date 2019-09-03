#include<iostream>
#define SIZE 4
using namespace std;
int main()
{
	int num[SIZE]={1,4,5,7};
	int total = 0;
	for(int i=0;i<SIZE;i++)
		total = total + num[i];
	cout << "Sum of all elements = " << total <<endl;


	return 0;
}