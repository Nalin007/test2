#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void Displaymenu();
float Area(const float Radius);
float Area(const float Length, const float Width);
float Area(const double Base, const float High);
int main()
{	
	char Ch;
	bool Flag = true;
	do{
		Displaymenu();
		cin >> Ch;
		if(Ch == '1'){
			float Radius;
			cout << "\nEnter radius : ";
			cin >> Radius;
			cout << "Area of Circle = " << fixed;
			cout << setprecision(2) << Area(Radius) << endl;
		
		}else if(Ch == '2'){
			float Length , Width;
			cout << "Enter length and width : ";
			cin >> Length >> Width;
			cout << "Area of Rectangle = " << fixed;
			cout << setprecision(2) << Area(Length,Width) << endl;
		
		}else if(Ch == '3'){
			double Base; float High;
			cout << "Enter Base and High : ";
			cin >> Base >> High;
			cout << "Area of Triangle = " << fixed;
			cout << setprecision(2) << Area(Base,High) << endl;
		
		}else if(Ch == '4') {Flag = false;}
		else{
			cout << "\nYou choose out of range is ";
			cout << "not process. \n";
		}
	}while(Flag);
	cout << "\n . . . Exit Program . . .\n";
	return 0;
}
void Displaymenu()
{	
	cout << endl;
	cout << "Program Calculate Area " <<endl;
	cout << "1. Clicle" << endl;
	cout << "2. Rectangle" << endl;
	cout << "3. Triangle " << endl;
	cout << "4. Exit"<< endl;
	cout << "Enter your choose number : ";
}
float Area(const float Radius)
{
	return(3.14*Radius*Radius);
}
float Area(const float Length, const float Width)
{
	return(Length * Width);
}
float Area(const double Base, const float High)
{
	return(0.5 * Base * High);
}
