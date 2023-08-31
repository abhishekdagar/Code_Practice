#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/rotate-image/description/
//first find transpose of matrix(cols become rows but if observe diagnol elements remains same) and then reverse the rows only
void optimal(vector<vector<int>> &arr) {
	int n = arr.size();		//no of rows
	int m = arr[0].size();	//no of cols
	for (int i = 0; i < n - 1; i++)					//transpose
	{
		for (int j = i + 1; j < m; j++)
		{
			swap(arr[i][j], arr[j][i]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		reverse(arr[i].begin(), arr[i].end());		//reversing rows
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

}
int main() {
	int n = 0; // no of rows
	cin >> n;
	int m = 0; // no of cols
	cin >> m;
	vector<vector<int>> arr(n, vector<int>(m, 0));	//2-D vector declaration with n rows and m cols
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	optimal(arr);
	return 0;
}
//TC is O(n^2) i.e O(n/2 * n/2) for transpose and O(n * n/2) for reverse