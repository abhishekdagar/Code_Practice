#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/rearrange-array-elements-by-sign/
//optimal has TC O(n) and SC O(n)
//better has TC O(2n) and SC O(n)
//better2 where pos and neg are not equal then we have to add the remaining also it's done using above better and it doesn't have optimal
void better(vector<int> &arr, int n) {
	vector<int> pos;
	vector<int> neg;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			pos.push_back(arr[i]);
		}
		else {
			neg.push_back(arr[i]);
		}
	}
	for (int i = 0; i < n ; i++)
	{
		arr[2 * i] = pos[i];
		arr[2 * i + 1] = neg[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
void optimal(vector<int> &arr, int n) {
	vector<int> ans(n);
	int pos = 0;
	int neg = 1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			ans[neg] = arr[i];
			neg = neg + 2;
		}
		else {
			ans[pos] = arr[i];
			pos = pos + 2;
		}
	}
	for (int i = 0; i < ans.size(); ++i)
	{
		cout << ans[i] << " ";
	}
}
void better2(vector<int> &arr, int n) {
	vector<int> pos;
	vector<int> neg;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			pos.push_back(arr[i]);
		}
		else {
			neg.push_back(arr[i]);
		}
	}
	if (pos.size() > neg.size())
	{
		for (int i = 0; i < neg.size(); i++)
		{
			arr[2 * i] = pos[i];
			arr[2 * i + 1] = neg[i];
		}
		int index = neg.size() * 2;
		for (int i = neg.size(); i < pos.size(); i++)
		{
			arr[index] = pos[i];
			index++;
		}
	}
	else {
		for (int i = 0; i < pos.size(); i++)
		{
			arr[2 * i] = pos[i];
			arr[2 * i + 1] = neg[i];
		}
		int index = pos.size() * 2;
		for (int i = pos.size(); i < neg.size(); i++)
		{
			arr[index] = neg[i];
			index++;
		}
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
	//better(arr, n);
	optimal(arr, n);
	return 0;
}
