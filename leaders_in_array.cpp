#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/studio/problems/superior-elements_6783446
//An element is called leader if it's greater then all the elements present to its right
void optimal(vector<int> &arr, int n) {
	vector<int> ans;
	int maxi = INT_MIN;
	for (int i = n - 1; i >= 0; i--)
	{
		if (arr[i] > maxi)
		{
			ans.push_back(arr[i]);
		}
		maxi = max(maxi, arr[i]);
	}
	sort(ans.begin(), ans.end());
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
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
	optimal(arr, n);
	return 0;
}
