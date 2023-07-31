#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/studio/problems/ninja-and-the-sorted-check_6581957
int check(vector<int> &arr, int n) {
	for (int i = 1; i < n; ++i)				//TC is O(N)
	{
		if (arr[i] >= arr[i - 1])
		{
			/* code */
		}
		else {
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int res = check(arr, n);
	cout << res;
	return 0;
}