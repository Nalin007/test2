#include<iostream>
#include<string>
#include<math.h>
#include<time.h>
using namespace std;
void Num(int, int);
int main()
{	srand(time(NULL));
	int R,I;
	int i = 0;
	R = (rand()%10 + 1);
	cout << "###Welcome to guessing number game###" << endl;
	do {
		cout << "Secret number has been chosen \n";
		cout << "Guess the number (1 to 10) : ";
		cin >> I;
		Num(R,I);
		i++;
	} while (I != R);
	cout << "You made " << i << " guesses. " << endl;
	return (0);
}
void Num(int Rand, int Input)
{
		if (Input < Rand) 
		{
			cout << "The secret number is higher" << endl << endl;
			
		}
		else if (Input == Rand)
		{
			cout << "Congratulation !!! \n";
			cout << "The secret number is " << Rand << endl << endl;
			
		}
		else
		{
			cout << "The secret number is lower"<< endl << endl;
			
		}

}