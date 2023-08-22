#include<bits/stdc++.h>
using namespace std;
//divide and conquer algorithm
// pick a pivot element and place it in it's correct place(left elements are smaller to it and right alements are larger then it) in the sorted array
//from left side find the first element greater then pivot and from right side find the first smaller then pivot and swap them
//once pivot is at it's correct order make it partition index
int partition(vector<int> &arr, int low, int high) {
	int pivot = arr[low];
	int i = low;
	int j = high;
	while (i < j) {
		while (arr[i] <= pivot && i <= high - 1) {		// high -1 to avoid boundary cases since we are inc i same reason for low+1 also
			i++;										//change arr[i] >= pivot and arr[j] < pivot for desc order output
		}
		while (arr[j] > pivot && j >= low + 1) {
			j--;
		}
		if (i < j)
		{
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[low], arr[j]);
	return j;

}
void quicksort(vector<int> &arr, int low, int high) {
	if (low < high)
	{
		int partitionIndex = partition(arr, low, high);
		quicksort(arr, low, partitionIndex - 1);
		quicksort(arr, partitionIndex + 1, high);
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
	quicksort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
//TC is O(NlogN) in best and average case and TC is O(N^2) in worst case(This case occurs when the pivot is the greatest or smallest element of the array. If the partition is done and the last element is the pivot, then the worst case would be either in the increasing order of the array or in the decreasing order of the array.)
//SC is O(1)