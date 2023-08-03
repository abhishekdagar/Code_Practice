#include<bits/stdc++.h>
using namespace std;
//return the index where the element is occurred in the array 1st time
//
int optimal(vector<int> &arr, int n, int num) {
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == num)
		{
			return i;
		}
	}
	return -1;
}
int main() {
	int n;
	cin >> n;
	int num;
	cin >> num;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int res = optimal(arr, n, num);
	cout << res;
}