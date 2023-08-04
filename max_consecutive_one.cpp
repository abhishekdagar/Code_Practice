#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/max-consecutive-ones/
int optimal(vector<int>&arr, int n) {
	int total = 0 ;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 1)
		{
			count++;
			total = max(count, total);
		}
		else {
			count = 0;
		}
	}
	return total;
}
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < arr.size(); i++)
	{
		cin >> arr[i];
	}
	int res = optimal(arr, n);
	cout << res;
	return 0;
}
//TC is O(n)