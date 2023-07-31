#include<bits/stdc++.h>
using namespace std;
//push the maximum element in the array to last by adjacent swaps
void bubble(int arr[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i ; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}
	}
}
void bubble_sort(int arr[], int n) {
	for (int i = n - 1; i >= 0; i--)
	{
		int didswap = 0;	//if array is already sorted in ascending order then no need to run n^2 times
		for (int j = 0; j <= i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				didswap = 1;
			}
		}
		if (didswap == 0)
		{
			break;
		}
	}
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	//bubble(arr, n);
	bubble_sort(arr, n);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}


//TC is O(N^2) in worst and average case
//TC is O(N) in best case when array is in sorted order