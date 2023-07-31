#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/single-number/
int optimal(vector<int>&arr, int n) {
	int xor1 = 0;
	for (int i = 0; i < n; i++)
	{
		xor1 = xor1 ^ arr[i];
	}
	return xor1;
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