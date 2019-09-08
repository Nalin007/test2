#include<iostream>
#include<string>
using namespace std;
void ListStudent(string N[10], int S[10], int);
char Calgrade(int);

int main()
{
	int i,n;
	string N[10];
	int S[10];
	cout << "Input Number of Student : ";
	cin >> n;
	for (i = 0; i < n; i++) 
	{
		cout << "Input Name : ";
		cin >> N[i];
		cout << "Input score : ";
		cin >> S[i];
		cout << endl;
		
	}
	ListStudent(N, S , n);

	return 0;
}
void ListStudent(string name[10], int score[10], int many)
{
	int i;
	
	for (i = 0; i < many; i++)
	{
		int M = score[i];
		cout << "Student Name : " << name[i] << "\t" << "Score " << i+1 <<" = " << score[i] << "\t";
		cout << "Your grade is ";
		cout << Calgrade(M);
		cout << endl;
	}

}
char Calgrade(int M)
{
	char grade ;
	
	if (M >= 80)
	{
		grade = 'A';
	}
	else if (M>= 70)
	{
		grade = 'B';
	}
	else if (M >= 60)
	{
		grade = 'C';
	}
	else if (M >= 50)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}

	return grade;
}