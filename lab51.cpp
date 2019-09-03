#include<iostream>
using namespace std;

int main()
{
	int temp;
	int a[10] = {99,19,1,23,0,15,10,23,-26,-29};
	for(int i=0; i < 9 ; i++)
	{	for(int i=0; i < 9 ; i++)
		{	if(a[i]>a[i+1])
			{	temp = a[i+1];
				a[i+1] = a[i];
				a[i] = temp;
			}
		}
	}
	for(int n = 0 ; n <= 9 ; n++)
	{	cout << a[n] << " ";
	}
	cout <<"\nThe maximum number is "<< a[9] <<endl;
	return 0;
}