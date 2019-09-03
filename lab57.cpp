#include<iostream>
using namespace std;
float average(float num[10]);
int main()
{
	int i; float score[10],avg_score;
	for(i=0;i<10;i++)
	{	cout << "Enter score " << i+1 << endl;
		cin >> score[i];
	}
	avg_score = average(score);
	cout << "Average score is " << avg_score << endl;

	return 0;
}
float average(float num[10])
{
	float total = 0.0 ,avg = 0.0;
	for(int i=0;i<10;i++)
		total = total + num[i];
	avg = total/10.0;
	return avg;
}