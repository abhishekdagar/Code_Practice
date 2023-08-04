#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/maximum-subarray/
//optimal uses kadane's algorithm TC is O(n)
/*
If we carefully observe our algorithm, we can notice that the subarray always starts at the particular index where the sum variable is equal to 0, and at the ending index, the sum always crosses the previous maximum sum(i.e. maxi).

So, we will keep a track of the starting index inside the loop using a start variable.
We will take two variables ansStart and ansEnd initialized with -1. And when the sum crosses the maximum sum, we will set ansStart to the start variable and ansEnd to the current index i.e i
*/
void better(vector<int> &arr, int n) {
	//int sum = 0;
	int maxi = arr[0];
	for (int i = 0; i < n; i++)
	{
		int sum = 0;					//after every iteration sum is set to 0
		for (int j = i; j < n; j++)
		{
			sum = sum + arr[j];
			maxi = max(maxi, sum);
		}
	}
	cout << maxi;
}
int optimal(vector<int> &arr, int n) {
	int maxi = arr[0];
	int sum = 0;
	int start = 0;
	int ansStart = -1;
	int ansEnd = -1;

	for (int i = 0; i < n; i++)
	{
		/*if (sum == 0)
		{
			start = i;		//starting index
		}*/
		sum = sum + arr[i];
		if (sum > maxi)
		{
			maxi = sum;
			//ansStart = start;
			//ansEnd = i;
		}
		if (sum < 0)
		{
			sum = 0;
		}
	}
	/*for (int i = ansStart; i <= ansEnd; i++)
	{
		cout << arr[i] << " ";
	}*/
	/*if(maxi<0){
	    maxi=0;			// if array has all elements as negative and we have to return 0 as sum then use it
	}*/
	return maxi;
}
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//better(arr, n);
	int res = optimal(arr, n);
	cout << res;
	return 0;
}