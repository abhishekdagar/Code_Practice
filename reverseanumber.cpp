#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/codestudio/problems/reverse-of-a-number_624652

int main() {
	int n, reverse = 0, lastdigit = 0;
	cin >> n;
	while (n > 0) {
		lastdigit = n % 10;
		reverse = reverse * 10 + lastdigit;
		n = n / 10;
	}
	cout << reverse;
	return 0;
}