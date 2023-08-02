#include<bits/stdc++.h>
using namespace std;
//
//If we rotate the array by it's size then we will get the same array so rotations will be k = k % n
//Optimal solution is based on observation if we reverse k element and then n-k elements and then reverse full array it will left roate the array
//reverse() ---- it reverses the order of the elements in the range [first, last) of any container. The time complexity is O(n).

void brute(vector<int> &arr, int n, int k) {
	vector<int> temp(k);
	for (int i = 0; i < k; i++)			//O(K)
	{
		temp[i] = arr[i];
	}
	for (int i = k; i < n; i++)			//O(N-K)
	{
		arr[i - k] = arr[i];
	}
	for (int i = n - k; i < n; i++)		//O(K)
	{
		arr[i] = temp[i - (n - k)];		// TC is O(N + K) and SC is O(K)
	}
}
void optimal(vector<int> &arr, int n, int k) {
	reverse(arr.begin(), arr.begin() + k);
	reverse(arr.begin() + k, arr.end());
	reverse(arr.begin(), arr.end());
}
int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//brute(arr, n, k);
	optimal(arr, n , k);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
