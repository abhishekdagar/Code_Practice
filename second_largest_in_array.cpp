#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960
//Brute Force Approach is sort the array last element is largest then check from n-2 element which is not equal to largest
//Better Approach is first find largest then find second largest using it in O(2N)
//Optimal Approach is second largest will just be behind largest how in class ranks it happens O(N)
int betterapproach(vector<int> &arr, int n) {
	int largest = arr[0];
	for (int i = 0; i < n; i++)			//TC is O(N)
	{
		if (arr[i] > largest)
		{
			largest = arr[i];
		}
	}
	int slargest = INT_MIN;
	for (int i = 0; i < n; i++)			//TC is O(N)
	{
		if (arr[i] > slargest && arr[i] != largest)
		{
			slargest = arr[i];
		}
	}
	return slargest;				//Total TC is O(2N)
}
int optimal(vector<int> &arr, int n) {
	int largest = arr[0];
	int slargest = INT_MIN;
	for (int i = 0; i < n; i++)				//TC is O(N)
	{
		if (arr[i] > largest)
		{
			slargest = largest;
			largest = arr[i];
		}
		else if (arr[i] < largest && arr[i] > slargest)
		{
			slargest = arr[i];
		}
	}
	return  slargest;
}
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//int res = betterapproach(arr, n);
	int res = optimal(arr, n);
	cout << res;
	return 0;
}