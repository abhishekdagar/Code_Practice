#include<bits/stdc++.h>
using namespace std;
//gives the nth fibonacii number
int fibonacii(int n) {
	if (n <= 1)
	{
		return n;
	}
	int last = fibonacii(n - 1);
	int secondlast = fibonacii(n - 2);
	return last + secondlast;
}
int main() {
	int n;
	cin >> n;
	cout << fibonacii(n);
	return 0;
}
// TC is O(2^n)