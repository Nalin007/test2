#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void calprice(float price[5][3]);
void calplay(string name[5],float price[5][3]);

int main()
{
	string name[5];
	float price[5][3];
	int i,j;
	for(i=0;i<5;i++){
		cout << "Enter Product Name : ";
		cin >> name[i];
		cout << "\tprice : ";
		cin >> price[i][0];
		
		cout << endl;
	}
	calprice(price);
	calplay(name,price);

	return 0;
}
void calprice(float price[][3])
{
	int i=0;
	for(i=0;i<5;i++){
		price[i][1] = price[i][0] * 0.07; 
		price[i][2] = price[i][0] + price[i][1]; 
	}
	cout << endl;
}
void calplay(string name[],float price[][3])
{
	cout <<"No.\tproduct\t\tprice\tvat7%\tNet"<<endl; 
	for(int i=0;i<5;i++){
		cout<<i+1<<"\t"<<name[i];
		cout <<"\t\t"<<fixed<<setprecision(2)<<price[i][0]<<"\t"<<fixed<<setprecision(2)<<price[i][1]<<"\t"<<fixed<<setprecision(2)<<price[i][2]<<endl;
	}
}