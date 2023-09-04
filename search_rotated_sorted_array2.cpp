#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/
//In type-2 repetation is possible
//find the sorted half's and we have to take care of edge cases
bool search(vector<int> &arr, int n, int target) {
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == target) {
			return true;
		}
		if (arr[low] == arr[mid] && arr[mid] == arr[high])//for edge case like [3,1,2,3,3,3,3]
		{
			low = low + 1;
			high = high + 1;
			continue;		//for edge case like [1,1,1,1,0,1,1,1,1]
		}
		else if (arr[mid] <= arr[high]) {
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
	return false;
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
	bool ans = search(arr, n, target);
	cout << ans;
	return 0;
}