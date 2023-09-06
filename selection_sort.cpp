#include<bits/stdc++.h>
using namespace std;
//select minimum and swap
void selection(int arr[], int n) {
	for (int i = 0; i <= n - 2; i++)//doing till n-2 because last element i.e n-1 will be already sorted
	{
		int minimum = i;
		for (int j = i; j <= n - 1 ; j++)
		{
			if (arr[j] < arr[minimum])
			{
				minimum = j;
			}
		}
		int temp = arr[minimum];
		arr[minimum] = arr[i];
		arr[i] = temp;
	}
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	selection(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
//TC is O(N^2) in all cases