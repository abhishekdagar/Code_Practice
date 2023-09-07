#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/set-matrix-zeroes/description/
//Better has TC of O(m*n) ans SC of O(m+n)
void better(vector<vector<int>>& matrix) {
	int n = matrix.size();
	int m = matrix[0].size();
	map<int, int> row;
	map<int, int> col;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] == 0) {
				row[i] = 1;
				col[j] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (row[i] == 1 || col[j] == 1) {
				matrix[i][j] = 0;
			}
		}
	}
}