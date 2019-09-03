#include<iostream>
using namespace std;
void chack_val(int x);
int main()
{
	int a[3]={2,-1,5};
	for(int i=0;i<3;i++)
		chack_val(a[i]);
	return 0;
}
void chack_val(int x)
{
	if(x >= 0)
		cout << x << ": Positive\n";
	else
		cout << x << ": Negative\n";
}