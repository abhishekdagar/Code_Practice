#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279
//Brute -- Sort the Array and then return arr[n-1] will take O(NlogN)
//Optimal O(N) below
int largestelement(vector<int> &arr, int n) {
	int largest = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > largest)
		{
			largest = arr[i];
		}
	}
	return largest;
}
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int l = largestelement(arr, n);
	cout << l;
	return 0;
}
