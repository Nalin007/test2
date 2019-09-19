#include<iostream>
#include<string>
#include<time.h>
void call_display(int A[5][6]);
char call_graph(int B);
using namespace std;

int main()
{
	srand(time(NULL));
	int a = rand() % 10 - 0;
	int A[5][6];
	int i, j;
	for (i = 0; i < 5; i++){
		for(j = 0; j < 6; j++){
			A[i][j] = rand() % 10-0;
			cout <<"\t" << A[i][j];
		}
		cout << endl;
	}
	call_display(A);

	return 0;
}
void call_display(int A[5][6])
{
	int i, j;
	cout << "------------------------- display graph --------------------------\n";
	cout << "\t0\t1\t2\t3\t4\t5\t\n";
	cout << "------------------------------------------------------------------\n";
	for (i = 0; i < 5; i++){
		cout << "|"<< i <<"|";
		for (j = 0; j < 6; j++) {
			int B = A[i][j];
			cout << "\t" << call_graph(B);
			
		}
		cout << endl;
	}
}
char call_graph(int B)
{
	int i, j;
	char c;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 6; j++) {
			if (B == 0)
				c = ' ';
			else
				c = '*';
		}
	}

	return c;
}