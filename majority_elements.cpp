#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/majority-element/
//optimal solution using moore's voting algorithm TC is O(n)
//better has TC O(nlogn) and SC O(n)
/*
inserting elements in map
	map<int, int> m;
	for (int i = 0; i < n; i++){
		if(m.find(arr[i]) == m.end()) {m[arr[i]]=1;}
		else {m[arr[i]]++;}
	}
*/
int better(vector<int> &arr, int n) {
	map<int, int> mpp;
	for (int i = 0; i < n; i++)		//for inserting elements in map
	{
		mpp[arr[i]]++;
	}
	/*for (auto it : mpp) {
		cout << it.first << "---" << it.second << "\n";
	}*/
	for (auto it : mpp) {
		if (it.second > n / 2)
		{
			return it.first;
		}
	}
	return -1;
}
int optimal(vector<int> &arr, int n) {
	int count = 0;
	int element;
	for (int i = 0; i < n; i++)
	{
		if (count == 0)
		{
			count = 1;
			element = arr[i];
		}
		else if (arr[i] == element)
		{
			count++;
		}
		else {
			count--;
		}
	}
	//cout << count;
	int count2 = 0;				// to check if element exists in array or not
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == element)
		{
			count2++;
		}
	}
	if (count2 > n / 2)
	{
		return element;
	}
	return -1;
}
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int res = 0;
	//res = better(arr, n);
	res = optimal(arr, n);
	cout << res;
	return 0;
}