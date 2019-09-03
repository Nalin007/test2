#include<iostream>
using namespace std;
void chack_val(int x);
int main()
{
	int a[3] = {2,-1,5};
	chack_val(a[0]);
	return 0;
}
void chack_val(int x)
{
	if(x >= 0)
		cout << x << ": Prsitive\n";
	else
		cout << x << ": Negative\n";

}
