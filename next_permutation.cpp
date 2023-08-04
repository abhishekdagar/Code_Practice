#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/next-permutation/submissions/
// c++ has STL which is used in optimalA to find the next permutation and it's implemented as optimalB
void optimalA(vector<int> &arr, int n) {
	next_permutation(arr.begin(), arr.end());
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
void optimalB(vector<int> &arr, int n) {
	int index = -1;
	for (int i = n - 2; i >= 0; i--)		//O(n)
	{
		if (arr[i] < arr[i + 1])
		{
			index = i;
			break;
		}
	}
	if (index == -1)
	{
		reverse(arr.begin(), arr.end());
		for (int i = 0; i < n; ++i)
		{
			cout << arr[i] << " ";
		}
	}
	for (int i = n - 1; i > index; i--)		//O(n)
	{
		if (arr[i] > arr[index])
		{
			swap(arr[i], arr[index]);
			break;
		}
	}
	reverse(arr.begin() + index + 1, arr.end());		//O(n)
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
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
	//optimalA(arr, n);
	optimalB(arr, n);
	return 0;
}
//TC is O(3n)