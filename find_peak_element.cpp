#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/find-peak-element/description/
//draw input graph on paper to understand better and why it's solved using BS
//since till peak it's inc and sorted and after peak it's dec and sorted
int peak(vector<int> &arr, int n) {
	if (n == 1)	//if only 1 element then it's peak
	{
		return 0;
	}
	if (arr[0] > arr[1])	// first peak case
	{
		return 0;
	}
	if (arr[n - 1] > arr[n - 2])	//last peak case
	{
		return n - 1;
	}
	//reducing search space
	int low = 1;
	int high = n - 2;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])//peak condition
		{
			return mid;
		}
		else if (arr[mid] > arr[mid - 1])	//if we are on left of peak
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
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int res = peak(arr, n);
	cout << res;
	return 0;
}