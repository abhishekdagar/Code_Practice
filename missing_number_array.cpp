#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/missing-number/description/
//xor(^) a^a = 0 and 0^a = a
int optimalA(vector<int>&arr, int n) {
	int s = (n * (n + 1)) / 2;
	int sum = 0;
	for (int i = 0 ; i < n; i++) {
		sum = sum + arr[i];
	}
	return (s - sum);
}
int better(vector<int> &arr, int n) {
	int temp[n + 1] = {0};
	for (int i = 0; i < n ; i++)
	{
		temp[arr[i]] = 1;
	}
	int res = 0;
	for (int i = 1; i < n; i++)
	{
		if (temp[i] == 0)
		{
			res = i;
		}
	}
	return res;		//TC is O(n+n) and SC is O(n)
}
int optimalB(vector<int> &arr, int n) {		//better then sum method
	int xor1 = 0;
	int xor2 = 0;
	/*for (int i = 1; i <= n; i++)			//instead of this loop we can calculate xor1 in below loop
	{
		xor1 = xor1 ^ i;
	}*/
	for (int i = 0; i < arr.size() - 1; i++)
	{
		xor2 = xor2 ^ arr[i];
		xor1 = xor1 ^ (i + 1);
	}
	xor1 = xor1 ^ n;
	int res = 0;
	res = xor1 ^ xor2;
	return res;
}
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < arr.size(); i++)
	{
		cin >> arr[i];
	}
	//int res = better(arr, n);
	//int res = optimalA(arr, n);
	int res = optimalB(arr, n);
	cout << res;
}