#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/search-in-rotated-sorted-array/
//In type-1 only distinct elements are present no repetation
//find the sorted half's
int search(vector<int> &arr, int n, int target) {
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == target) {
			return mid;
		}
		if (arr[mid] <= arr[high]) {
			if (arr[mid] <= target && target <= arr[high]) {
				low = mid + 1;
			}
			else {
				high = mid - 1;
			}
		}
		else {
			if (arr[low] <= target && target <= arr[mid]) {
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
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
	int ans = search(arr, n, target);
	cout << ans;
	return 0;
}