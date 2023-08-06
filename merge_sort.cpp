#include<bits/stdc++.h>
using namespace std;
// divide and conquer(this alogrithm divides the array hypothetically) and merge
//Instead of breaking the array we will play with indexes
//low = satrting index of array
//high = last index of array
void merge(vector<int> &arr, int low, int mid, int high) {
	vector<int> temp; // temporary array
	//[low ----- mid] 1st array
	//[mid+1 ----high] 2nd array
	int left = low;			// pointer for 1st array pointing at first index of 1st array
	int right = mid + 1;	// pointer for 2nd array pointing at first index of 2nd array
	while (left <= mid && right <= high) {
		if (arr[left] <= arr[right])
		{
			temp.push_back(arr[left]);
			left++;
		}
		else {
			temp.push_back(arr[right]);
			right++;
		}
	}
	while (left <= mid) {			// for any elements remaining on the left array
		temp.push_back(arr[left]);
		left++;
	}
	while (right <= high) {			// for any elements remaining on the right array
		temp.push_back(arr[right]);
		right++;
	}
	for (int i = low; i <= high; i++)
	{
		arr[i] = temp[i - low];
	}
}
void mergesort(vector<int> &arr, int low, int high) {
	if (low == high)	//	array has only 1 element
	{
		return;
	}
	int mid = (low + high) / 2;
	mergesort(arr, low, mid);
	mergesort(arr, mid + 1, high);
	merge(arr, low, mid, high);

}
int main() {
	int n;
	cin >> n;
	//int a;
	vector<int> arr(n);	//syntax of vector with size declaration as n
	for (int i = 0; i < n; i++)
	{
		//cin >> a;
		cin >> arr[i];
		//arr.push_back(a);
	}
	mergesort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
//TC is O(NlogN) in all cases
//SC is O(N) for temp array in merge