#include<iostream>
using namespace std;
void find_max(int vals[5]);
void main()
{
	int nums[5] = {2,18,1,27,16};
	find_max(nums);
}
void find_max(int vals[5])
{
	int max = vals[0];
	for (int i = 1; i < 5 ; i++)
		if(max < vals[i])
			max = vals[i];
	cout << "The maximum value is " << max << endl;
}