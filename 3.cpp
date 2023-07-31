#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) { //for t test cases
		int n;
		cin >> n;
		for (int i = 1; i <= n ; ++i)//for no of lines
		{
			for (int j = 1; j <= i; ++j)//printing * for those lines
			{
				cout << "*";
			}
			cout << endl;
		}
	}
}