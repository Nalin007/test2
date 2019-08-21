#include<iostream>
#include<string>
#include<math.h>
#include<time.h>
using namespace std;
void Num(int);
int main()
{	srand(time(NULL));
	int R;
	R = (rand()%10 + 1);
	Num(R);
	return (0);
}
void Num(int Rand)
{
	int I;
	int i = 0;
	cout << "###Welcome to guessing number game###" << endl;
	do{
		cout << "Secret number has been chosen \n";
		cout << "Guess the number (1 to 10) : ";
		cin >> I;
		if (I < Rand) 
		{
			cout << "The secret number is higher" << endl << endl;
			i++;
		}
		else if (I == Rand)
		{
			cout << "Congratulation !!! \n";
			cout << "The secret number is " << Rand << endl << endl;
			i++;
		}
		else
		{
			cout << "The secret number is lower"<< endl << endl;
			i++;
		}
		
	}while(I!=Rand);
	cout << "You made "<<i<<" guesses. "<<endl;
}