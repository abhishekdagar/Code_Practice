//Micro and Array Update https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		int min = arr[0];
		for (int i = 0; i < n; ++i)
		{
			if (arr[i] <= min)
			{
				min = arr[i];
			}
		}
		if (k > min)
		{
			cout << k - min << endl;
		}
		else
			cout << 0 << endl;

	}
	return 0;
}