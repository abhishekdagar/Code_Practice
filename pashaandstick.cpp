//Pasha and Stick codeforces
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n % 2 != 0)
	{
		cout << 0;
		return 0;
	}
	n = n / 2;
	n = n - 1;
	cout << n / 2;
}
