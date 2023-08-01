#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	unordered_map<int, int> mpp;
	for (int i = 0; i < n; i++)
	{
		mpp[arr[i]] = mpp[arr[i]] + 1;
	}
	int highest = 0;
	int lowest = 1;
	for (auto it : mpp) {
		cout << it.first << "--" << it.second << "\n";
		highest = max(highest, it.second);
		lowest = min(lowest, it.second);
	}
	cout << "highest " << highest << "\n";
	cout << "lowest " << lowest;
	return 0;
}