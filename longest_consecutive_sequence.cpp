#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/longest-consecutive-sequence/description/
int better(vector<int> &arr, int n) {
	sort(arr.begin(), arr.end());
	int lastSmallest = INT_MIN;
	int count = 0;
	int longest = 1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] - 1 == lastSmallest)
		{
			count = count + 1;
			lastSmallest = arr[i];
		}
		else if (arr[i] != lastSmallest)
		{
			count = 1;
			lastSmallest = arr[i];
		}
		longest = max(longest, count);
	}
	return longest;		//TC O(nlogn +n)

}
int optimal(vector<int> &arr, int n) {
	if (n == 0)
	{
		return 0;
	}
	int longest = 1;
	unordered_set<int> st;
	for (int i = 0; i < n; i++)	//TC O(n) considering unordered set is taking O(1) in avg and best case
	{
		st.insert(arr[i]);
	}
	for (auto it : st)		//TC O(n + n) 1n for for loop and other for while
	{
		if (st.find(it - 1) == st.end())
		{
			int count = 1;
			int x = it;
			while (st.find(x + 1) != st.end()) {
				x = x + 1;
				count = count + 1;
			}
			longest = max(longest, count);
		}
	}
	return longest;		//TC O(3n) and SC O(n) for set
}
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//int res = better(arr, n);
	int res = optimal(arr, n);
	cout << res;
	return 0;
}
