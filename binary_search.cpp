#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/binary-search/description/
//Binary Search works only on sorted
//TC is O(logN)
int binary(vector<int> &arr, int n, int target) {
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == target)
		{
			return mid;
		}
		else if (target > arr[mid])
		{
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}
int main() {
	int n;
	cin >> n;
	int target;
	cin >> target;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int ans = binary(arr, n, target);
	cout << ans;
	return 0;
}