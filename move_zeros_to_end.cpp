#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/move-zeroes/submissions/
//x is length where first 0 was found
void optimal(vector<int> &arr, int n) {
	int j = INT_MIN;
	for (int i = 0; i < n; i++)			//TC is O(x)
	{
		if (arr[i] == 0)
		{
			j = i;
			break;
		}
	}
	if (j == INT_MIN)
	{
		return;
	}
	for (int i = j + 1; i < n; i++)		//TC is O(N-x)
	{
		if (arr[i] != 0)
		{
			swap(arr[j], arr[i]);
			j++;
		}
	}
}
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	optimal(arr, n);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
//TC is O(N)