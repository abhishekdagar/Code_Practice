#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/row-with-maximum-ones/description/
//https://www.codingninjas.com/studio/problems/row-of-a-matrix-with-maximum-ones_982768
//optimal has TC O(m*logn*logn)
int lower(vector<int> arr, int n, int x) {
	int low = 0;
	int high = n - 1;
	int ans = n;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] >= x) {
			ans = mid;
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	return ans;
}
vector<int> optimal(vector<vector<int>>& arr) {
	int m = mat.size();
	int index = -1;
	int max_count = -1;
	int n = mat[0].size();
	for (int i = 0; i < m; i++) {
		sort(mat[i].begin(), mat[i].end());
		int count_ones = n - lower(mat[i], n, 1);
		if (count_ones > max_count) {
			max_count = count_ones;
			index = i;
		}
	}
	return {index, max_count};
}
int main() {
	int m;	//m rows
	cin >> m;
	int n;	//n cols
	cin >> n;
	vector<vector<int>> arr(m, vector<int>(m, 0));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; i < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	optimal(arr);
}