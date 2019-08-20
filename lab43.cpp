#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int CalAge(int);
int main()
{
	int y,f;
	cout << "Enter number loob : ";
	cin >> f;
	for(int n=1; n<=f ;n++){
	cout << "Enter Year"<< n <<" : ";
	cin >> y;
	cout << "Age "<<n<<": "<< CalAge(y)<<endl;
	}
	cout << "Thank you." <<endl;
	return(0);
}
int CalAge(int year)
{
	return(2562-year);
}