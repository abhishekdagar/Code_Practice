//Friend's Relationship Hackerearth
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n ; ++i)
		{
			for (int j = 1; j <= 2 * n; ++j)
			{
				if (j <= i || j > 2 * n - i)
				{
					cout << "*";
				}
				else {
					cout << "#";
				}
			}
			cout << endl;
		}
	}

}