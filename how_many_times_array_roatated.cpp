#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/studio/problems/rotation_7449070
//if we find the minimum in rotated sorted array then if we observe we can find that it's rotated at it's index
void rotated(vector<int> &arr, int n) {
	int low = 0;
	int high = n - 1;
	int index = -1;
	int ans = INT_MAX;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] <= arr[high])
		{
			//ans = min(ans,arr[mid])
			if (arr[mid] < ans) {		//it's same as min function
				ans = arr[mid];
				index = mid;
			}
			high = mid - 1;
		}
		else {
			//ans = min(ans,arr[low])
			if (arr[low] < ans)
			{
				ans = arr[low];
				index = low;
			}
			low = mid + 1;
		}
	}
	cout << index;
}
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	rotated(arr, n);
	return 0;
}