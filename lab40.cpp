#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int power2(int,int);
int main()
{
	int x = 1,result, y = 1;
	while(x<=10){
		//cout << power2(x) << endl;
		result = power2(x,y);
		cout << result <<endl;
		x = x + 1;
		y = y + 2 ;
	}
	return(0);
}

int power2(int n, int m)
{
	return(pow(n*1.0,m*1.0));
}