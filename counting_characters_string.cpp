#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	//precomputing
	int hash[256] = {0};
	for (int i = 0; i < s.size(); i++)
	{
		hash[s[i]] = hash[s[i]] + 1;
	}
	int q;
	cin >> q;

	while (q--) {
		char c;
		cin >> c;
		//fetching
		cout << hash[c] << "\n";
	}

	return 0;
}