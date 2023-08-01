//Integer Sequence Dividing Codeforces
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	n = n % 4;
	if (n == 0 || n == 3) {
		cout << "0";
	}
	else {
		cout << "1";
	}
}