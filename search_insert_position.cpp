#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/search-insert-position/
//It's same as lower bound
int searchPosition(vector<int> &arr, int n, int x) {
	int ans = n;
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] >= x)
		{
			ans = mid;
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	return ans;
}
int main() {
	int n;
	cin >> n;
	int x;
	cin >> x;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int res = searchPosition(arr, n, x);
	cout << res;
	return 0;
}