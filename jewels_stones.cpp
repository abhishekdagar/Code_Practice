//Jewels and Stones https://www.codechef.com/problems/STONES
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string j, s;
		int cnt = 0;
		cin >> j >> s;

		for (int i = 0; i < s.size(); ++i)
		{
			for (int k = 0; k < j.size(); ++k)
			{
				if (s[i] == j[k])
				{
					cnt++;
					break;
				}
			}
		}
		cout << cnt << endl;
	}

}