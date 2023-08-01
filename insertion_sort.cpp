#include<bits/stdc++.h>
using namespace std;
// Takes an element and place it in it's correct order
void insertion(int arr[], int n) {
	for (int i = 0; i <= n - 1; i++)
	{
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j]) {
			int temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;
			j--;
		}
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
	insertion(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
//TC is O(N^2) for worst and average case
//TC is O(N) for best case when array is sorted in asscending order