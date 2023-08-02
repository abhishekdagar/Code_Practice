#include<bits/stdc++.h>
using namespace std;
//floor = largest number in array <= x
//ceil = smallest number in array >= x i.e lower bound
int floor(vector<int> &arr, int n, int target) {
	int ans = -1;
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] <= target)
		{
			ans = arr[mid];
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return ans;
}
int ceil(vector<int> &arr, int n, int target) {
	int ans = n;
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] > target)
		{
			ans = arr[mid];
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
	int target;
	cin >> target;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int res1 = floor(arr, n, target);
	int res2 = ceil(arr, n, target);
	cout << "Floor--" << res1 << "\n";
	cout << "Ceil--" << res2;
	return 0;
}