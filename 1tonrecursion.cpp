#include<bits/stdc++.h>
using namespace std;
// print 1 to n using recursion

void printnumbers(int i, int n) {
	if (i > n)
	{
		return;
	}
	cout << i << " ";
	printnumbers(i + 1, n);
}
void othermethod(int i, int n) {
	if (i < 1)
	{
		return;
	}
	othermethod(i - 1, n);
	cout << i << " ";
}
int main() {
	int n;
	cin >> n;
	//printnumbers(1, n);
	othermethod(n, n);
	return 0;
}