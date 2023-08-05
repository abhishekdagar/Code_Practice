#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
//First occurrence can be found using lower bound if element is present in array
//Last occurrence can be found using upper bound if element is present in array
void position(vector<int> &arr, int n, int x) {
	int lb = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
	if (lb == n || arr[lb] != x)		//for handling edge cases element not present then lb will be something, and if lb is at hypothetcal index after n-1
	{
		cout << "first = -1" << "\n" << "last = -1";
		return ;
	}
	int ub = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
	cout << "first = " << lb << "\n";
	cout << "last = " << ub - 1;
}
int first(vector<int> &arr, int n, int x) {
	int ans = -1; //initially assuming x is not present
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == x)
		{
			ans = mid;
			high = mid - 1; // we can have many x and first x will be on left of mid
		}
		else if (arr[mid] < x)
		{
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return ans;
}
int last(vector<int> &arr, int n, int x) {
	int ans = -1; //initially assuming x is not present
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == x)
		{
			ans = mid;
			low = mid + 1; // we can have many x and last x will be on right of mid
		}
		else if (arr[mid] < x)
		{
			low = mid + 1;
		}
		else {
			high = mid - 1;
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
	//position(arr, n, x);
	int res1 = first(arr, n, x);
	if (res1 == -1)
	{
		//cout << {-1,-1} if we don't have first occurrence then last will also not be there
	}
	int res2 = last(arr, n, x);
	//cout{res1,res2}
	return 0;
}