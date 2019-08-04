#include<iostream>
#include<string>
using namespace std;

int main()
	{
		char ch;
		string x;
		string y;
		string user;
		string pass;
	do{
		cout <<"//////////////MENU///////////////\n";
		cout <<"1. Regiter\n";
		cout <<"2. Login\n";
		cout <<"Q. Exit Program\n";
		cout << endl;
		cout << "Enter your choose number : ";
		cin >> ch;	
		cout << endl;
				if(ch=='1')
				{
					cout <<"**********REGITER************\n";
					cout <<"Input Username : ";
					cin >> x;
					cout <<"Input Password : ";
					cin >> y;
					cout << endl;
				}
				
				else if(ch=='2'){
					cout <<"***********LOGIN************\n";
					int a = 1;
				do{
					cout <<"Input Username : ";
					cin >> user; 
					cout <<"Input Password : ";
					cin >> pass;
					if(x == user && y == pass){						
							cout <<"Username or Password correct";
							cout << endl;
						} else {
							cout <<"!!!Username or Password incorrect Please try again!!!";
							cout << endl;
						}
				}while((x == user && y == pass)!=1);
				}
				
				else if(ch=='Q'){
					cout <<"Exit Program";
					cout << endl;}
				
				else {
					cout << endl;}


	
	}while(ch!='Q');

		return(0);
	}