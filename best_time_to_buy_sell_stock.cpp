#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
int optimal(vector<int> &arr, int n) {
	int mini = arr[0];
	int profit = 0;
	for (int i = 0; i < n; i++)
	{
		int cost = arr[i] - mini;
		profit = max(profit, cost);
		mini = min(mini, arr[i]);
	}
	return profit;
}
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int res = optimal(arr, n);
	cout << res;
	return 0;
}