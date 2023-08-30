#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/rotate-array/
void optimal(vector<int> &arr, int n, int k) {
	k = k % n;					// avoid runtime error for large k values
	reverse(arr.begin(), arr.end());
	reverse(arr.begin(), arr.begin() + k);
	reverse(arr.begin() + k, arr.end());
}
int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	optimal(arr, n, k);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}