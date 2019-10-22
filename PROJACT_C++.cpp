#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>

using namespace std;
int Menu();
void Add(float B[][5], string C[][10], string Age[50], int N);
string Come(int i, int t, string C[][10]);

void Traetment(float B[][5], string C[][10], int N);

void Te(float B[][5], string C[][10], string Age[50], int N);

void Total(float B[][5], string C[][10], float total, int N);

void People(float B[][5], string C[][10], string Age[50], int N);

int main()
{
	int A, N = 0;
	//อาเรเก็บ หนัก สูง
	float B[50][5];
	//ไอดีกับชื่อ 
	string C[50][10];
	//การรักษา ราคา
	string Age[50];
	float total = 0;
	do {
		system("cls");
		A = Menu();
		if (A == 1) {
			N += 1;
			Add(B, C,Age, N);
		}
		else if (A == 2) {
			Traetment(B, C, N);
		}
		else if (A == 3) {
			Te(B, C, Age, N);
		}
		else if (A == 4) {
			Total(B, C, total, N);
		}
		else if (A == 5) {
			People(B, C, Age, N);
		}
		else if (A == 0) {
			cout << "  BYE\n";
		}
		else {
			cout << "None\n";
		}
	
	} while (A != 0);
	cout << "  Exit Programe\n";
	return 0;
}

int Menu()
{
	int choose;
	cout << endl;
	cout << "  _______________________________________________________\n";
	cout << "  |                       MENU                          |\n";
	cout << "  |_____________________________________________________|\n";
	cout << "  |\t\t1. Add information\t\t\t|\n";
	cout << "  |\t\t2. Traetment\t\t\t\t|\n";
	cout << "  |\t\t3. Treatment list\t\t\t|\n";
	cout << "  |\t\t4. Patient history\t\t\t|\n";
	cout << "  |\t\t5. Revenue\t\t\t\t|\n";
	cout << "  |\t\t0. Exit Programe\t\t\t|\n";
	cout << "  |_____________________________________________________|\n";
	cout << "  Choose Number : ";
	cin >> choose;
	
	return choose;
}

void Add(float B[][5], string C[][10], string Age[50], int N)
{
	int i = -1 + N;
	int j = i - 1; 
	int t = i;
	string Icon;
	for (i; i < N; i++) {
		cout << "  Input ID : ";
		cin >> C[i][0];
		cout << "  Input NAME : ";
		cin >> C[i][1];
		do {
			cout << "  Sex (1 = male, 2 = female) : ";
			cin >> Icon;
			if (Icon == "1") {
				C[i][3] = "Mr.";
			}
			else if (Icon == "2") {
				C[i][3] = "Mrs.";
			}
			else { 
				cout << "  Please try again enter\n"; 
			}
		} while (Icon != "1" && Icon != "2");
		a:
		cout << "  Input AGE : ";
		cin >> Age[i];
		if (Age[i] > "999" || Age[i] < "000")
		{
			goto a;
		}
		cout << "  Input WEIGHT ( kg ) : ";
		cin >> B[i][0];
		cout << "  Input HEIGHT ( cm ) : ";
		cin >> B[i][1];
		cout << "  Drug allergy  : ";
		cin >> C[i][5];
		
		cout << endl;
		cout << Come(i, t, C);
		cout << endl;

	}
	system("pause");
}
string Come(int i, int t, string C[][10])
{
	string re;
	t -= 1;
	int d = 0;
	do {
		if (i > 0) {
			if (C[i][0] == C[t][0]) {
				re = "  ______________________________\n  | You ever has been treated. |\n  |____________________________|\n";
			}
		}
		t -= 1;
	} while (C[i][0] == C[t][0]);
	return (re);
}

void Traetment(float B[][5], string C[][10], int N)
{
	string x;
	int i = -1 + N; ;
	//int j = i;
	int t = -1 + N;
	int z = 0;
	for (i; i < N; i++) {
		cout << "  Input ID : ";
		cin >> x;
		if (x == C[t][0]) {
			do {
				if (x == C[i][0]) {
					cout << "  NAME : " << C[i][3] << " " << C[i][1] << endl;
					cout << "  Be allergic ==> " << C[i][5] << endl;
					if (i > 0) {
						cout << "  ________________________________________________________\n";
						for (z; z < i; z++) {
							if (C[i][0] == C[z][0]) {
								cout << "  | treatment " << "\t|" << C[z][2] << "\t\t|" << " Price " << "\t|" << fixed << setprecision(2) << B[z][2] <<  "\t |";
								cout << endl;
								cout << "  |------------------------------------------------------|\n";
							}
						}
					}
					cout << "  What kind of treatment do you need ? : ";
					cin >> C[i][2];
					cout << "  Cost of treatment : ";
					cin >> B[i][2];
				}

			} while (x != C[i][0]);

		}
	}
	cout << endl;
	system("pause");
}

void Te(float B[][5], string C[][10], string Age[50], int N)
{
	int i;
	cout <<setfill('_') << setw(106) << "_\n";
	cout <<"| Order"<<"\t"<<"| User " << "\t" << "| Name" << "\t\t" <<"| Age "<<"\t"<< "| Weight" << "\t" << "| Height" << "\t" << "| Treatment" << "\t\t" << "| Cost " << "\t|" << endl;
	cout <<"|"<<setfill('-') << setw(105) << "|\n" ;
	for (i = 0; i < N; i++) {
		cout <<"| "<<i+1<<"\t\|"<< C[i][0] << "\t|" << C[i][1] << "\t\t|" << Age[i] <<"\t|" << fixed << setprecision(2) << B[i][0] << "\t\t|" << fixed << setprecision(2) << B[i][1] << "\t\t|" << C[i][2] << "\t\t\t|" << B[i][2] << "\t|\n";
		cout <<"|" << setfill('-') << setw(105) << "|\n";
	}
	
	cout << endl;
	system("pause");
}

void People(float B[][5], string C[][10], string Age[50], int N)
{
	int i = N - 1;
	string max;
	cout << "  Input ID : ";
	cin >> max;
	cout << "  History of treatment. ";
	cout << endl;
	cout << "\n_________________________________________________________________________________\n";
	cout << "|"<<"NP"<<"\t|"<<"NAME"<<"\t|"<<"Age"<<"\t|"<<"WEIGHT"<<"\t|"<<"HEIGHT"<<"\t|"<<"ALLERGIC"<< "\t|"<<"TREATMENT"<<"\t|"<<"COST"<<"\t|"<<endl;
	cout << "|-------------------------------------------------------------------------------|\n";
	
		for (int t = 0; t <= i; t++) {
			if (max == C[t][0]) {
			cout <<"|"<<C[t][3] <<"\t|"<< C[t][1]<<"\t|"<<Age[t]<<"\t|" << fixed << setprecision(2) << B[t][0] << "\t|" << fixed << setprecision(2) << B[t][1] << "\t|" << C[i][5] << "\t\t|" << C[t][2] << "\t\t|" << fixed << setprecision(2) << B[t][2] <<"\t|"<< endl;
			cout << "|-------------------------------------------------------------------------------|\n";
			}
		}
		cout << endl;
	system("pause");
}

void Total(float B[][5], string C[][10], float total, int N)
{
	cout << setfill('_') << setw(50) << "_\n";
	cout << "| Rank " << "\t" << "| Name" << "\t" << "| Treatment" << "\t\t" << "| Cost" << "\t|\n";
	cout << "|" << setfill('-') << setw(49) << "|\n";
	for (int i = 0; i < N; i++) {
		
			total = total + B[i][2];
		
		cout << "| " << i+1 << "\t|" << C[i][1] << "\t|" << C[i][2] << "\t\t\t|" << fixed << setprecision(2) << B[i][2] << "\t|\n";
		cout << "|" << setfill('-') << setw(49) << "|\n";
	}
	cout << "\t\t| Total money "<<"\t\t|" << fixed << setprecision(2) << total <<"\t|"<< endl;
	cout << "\t\t" << "|" << setfill('-') << setw(33) << "|\n";
	system("pause");
}