#include<iostream>
#include<string>
using namespace std;
float calAm(float ,int);

int main()
{	int i = 1, sum = 0;
	int j;
	float am;
	int y;
	cout << " . . . . . . . . . . . . LEK . . . . . . . . . . . . .\n";
	do{
		cout << "Input Amount "<< i << " : ";
		cin >> am;
		cout << "Input Year "<< i << " : ";
		cin >> y;
		cout << "Total your money"<<i<<" : "<< calAm(am , y) << endl;
		sum += calAm(am , y);
		i++;
		cout << "************************************************"<<endl;
	}while(i <= 3);
	j = i-1;
	cout << "Total "<<j<<" people = " << sum << endl;
	return(0);
}
float calAm(float am,int y)
{	float Total = ((am * 0.03)*y)+am;
	return(Total);
}