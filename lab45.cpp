#include<iostream>
#include<string>
using namespace std;
void ParseName(string &First,string &Last, const string FullName);

int main()
{
	string Name = "Kaewpanta,Nalin";
	string LastName , FirstName;

	ParseName (FirstName , LastName , Name);
	Name = FirstName + " " + LastName;
	cout << "Name : " << Name << endl;

	return (0);
}
void ParseName(string &First,string &Last, const string FullName)
{
	int I = FullName.find(",");
	Last = FullName.substr(0,I);
	First = FullName.substr(I+1,FullName.size());
	Last = "Mr. Kaewpanta";
}