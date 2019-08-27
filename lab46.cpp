#include<iostream>
#include<string>

using namespace std;
int sum(int x=1, int y=1, int z=1, int w=1 )
{
	return(x + y + z + w);
}
int main()
{
	cout << sum(10, 15) << endl;
	cout << sum(10, 15, 25) << endl;
	cout << sum(10, 15, 25, 30) << endl;
	cout << sum(10) << endl;
	cout << sum() << endl;
	return (0);
}