#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/codestudio/problems/number-of-digits_9173
void logmethod(int n) {
	// log method to count number-of-digits
	int digitcount = log10(n) + 1;
	cout << digitcount;
}
int main() {
	int n, count = 0;
	cin >> n;
	//logmethod(n);
	while (n > 0) {
		n = n / 10;
		count++;
	}
	cout << count;
	return 0;
}
// TC = O(log10(n)) whenever division happens time complexity(TC) is logn and the no by which division is done will be base.
