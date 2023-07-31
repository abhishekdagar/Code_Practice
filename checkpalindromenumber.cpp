#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/codestudio/problems/palindrome-number_624662
int main() {
	int n, reverse = 0, lastdigit = 0, orignalnum = 0;
	cin >> n;
	orignalnum = n;
	while (n > 0) {
		lastdigit = n % 10;
		reverse = reverse * 10 + lastdigit;
		n = n / 10;
	}
	//cout << reverse;
	if (orignalnum == reverse) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	return 0;
}