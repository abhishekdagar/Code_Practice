#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/studio/problems/lower-bound_8165382
//lower bound = smallest index such that array[index] >= x
//If x is not present in the array then (array size + 1) is the lower bound
int binarySearch(vector<int> &arr , int n, int x) {
	int low = 0;
	int high = n - 1;
	int ans = n;
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
int usingSTL(vector<int> &arr , int n, int x) {
	int lb = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
	return lb;
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
	//int ans = binarySearch(arr, n, x);
	int ans = usingSTL(arr, n, x);
	cout << ans;
	return 0;
}
//TC is O(logN)