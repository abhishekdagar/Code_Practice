#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
void minimum(vector<int> &arr, int n) {
	int low = 0;
	int high = n - 1;
	int ans = INT_MAX;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] <= arr[high])
		{
			ans = min(ans, arr[mid]);
			high = mid - 1;
		}
		else {
			ans = min(ans, arr[low]);
			low = mid + 1;
		}
	}
	cout << ans;
}
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	minimum(arr, n);
	return 0;
}