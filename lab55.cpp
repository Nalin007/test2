#include<iostream>
using namespace std;
void print_arr(int a[4]);
int main()
{
	int num[4] = {5,2,-1,8};
	print_arr(num);//ไม่ต้องใส่[]
	return 0;
}
void print_arr(int a[4])
{
	for(int i = 0 ; i < 4 ; i++)
		cout << a[i] << endl;
}