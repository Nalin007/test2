#include<iostream>
#include<math.h>
using namespace std;

int add (int &x, int &y);
int sub (int , int);
int mul (int , int);
int main()
{	
	int x, y;
	int i=1;
	do{
	cout << "Input number X : ";
	cin >> x ;
	cout << "Input number Y : ";
	cin >> y ;
	cout << x << "  " << y << endl;
	cout << add(x,y) << endl;
	cout << x << "  " << y << endl;
	cout << sub(x,y) << endl;
	cout << mul(x,y) << endl;
	i++;
	}while(i<=3);
	return(0);

}
int add(int &x, int &y)
{	x++;
	y++;
	return(x+y);
}
int sub (int x, int y)
{
	return(x-y);
}
int mul (int x, int y)
{
	return(x*y);
}