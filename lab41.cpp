#include<iostream>
#include<string>
using namespace std;

void CalCircle(float);
int main()
{	float Radius;
	cout << "Input radius : ";
	cin >> Radius;
	CalCircle(Radius);
	return(0);
}
void CalCircle(float R)
{	float Area , Circumference;
	Area = 3.14f*R*R;
	Circumference = 2*3.14f*R;
	cout << endl;
	cout << "Area of circle : " << Area << endl;
	cout << "Circumference of circle : " << Circumference << endl;
	cout << "Diameter of circle : " << (2*R) << endl;

}