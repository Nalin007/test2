#include<iostream>
using namespace std;
int X();
int Y();
int A = 8;
int B = 3;
int X ()
{	int A = 5;
	return ::A;
}

int Y()
{	int A = 10;
	return ::A;
}

int main()
{	cout <<  A + X() <<endl;
	cout <<	 B + Y() <<endl;
	return 0;
}