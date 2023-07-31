//Carvans https://www.codechef.com/LRNDSA01/problems/CARVANS
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		int cnt = 1;
		int min = arr[0];
		for (int i = 1; i < n; ++i)
		{
			if (arr[i] <= min)
			{
				cnt++;
			}
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
		cout << cnt << endl;
	}


}