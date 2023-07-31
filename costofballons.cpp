//Cost of balloons https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int green, purple;
		cin >> green >> purple;
		int n;
		cin >> n;
		int sum1 = 0;
		int arr[n][2];
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < 2; ++j)
			{
				cin >> arr[i][j];
			}
		}
		for (int i = 0; i < n; ++i)
		{
			if (arr[i][0] == 1)
			{
				sum1 = sum1 + 1 * green;
			}
			if (arr[i][1] == 1)
			{
				sum1 = sum1 + 1 * purple;
			}
		}
		int sum2 = 0;
		for (int i = 0; i < n; ++i)
		{
			if (arr[i][0] == 1)
			{
				sum2 = sum2 + 1 * purple;
			}
			if (arr[i][1] == 1)
			{
				sum2 = sum2 + 1 * green;
			}
		}
		cout << min(sum1, sum2) << endl;
	}


}