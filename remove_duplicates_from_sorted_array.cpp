#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//Set has unique elments specified in sorted order
int brute(vector<int> &arr, int n) {
	set<int> st;				//set declaration syntax
	for (int i = 0; i < n; i++)
	{
		st.insert(arr[i]);				//TC for insert in set is logN
	}									//Total TC for loop is O(NlogN)
	int index = 0;
	for (auto it : st)					//TC is O(N)
	{
		arr[index] = it;
		index++;
	}
	return index;					//Overall TC is O(NlogN + N) and SC is O(N) for set

}
int optimal(vector<int> &arr, int n) {
	int i = 0;
	for (int j = 1; j < n; j++)				//TC is O(N)
	{
		if (arr[j] != arr[i])
		{
			arr[i + 1] = arr[j];
			i++;
		}
	}
	return i + 1;
}
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//int res = brute(arr, n);
	int res = optimal(arr, n);
	cout << res;
	return 0;
}