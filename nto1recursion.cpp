#include<bits/stdc++.h>
using namespace std;
// print n to 1
void printnumbers(int i , int n) {
	if (i > n)
	{
		return;
	}
	printnumbers(i + 1, n);
	cout << i << " ";
}
void othermethod(int i, int n) {
	if (i < 1)
	{
		return;
	}
	cout << i << " ";
	othermethod(i - 1, n);
}

int main() {
	int n;
	cin >> n;
	//printnumbers(1, n);
	othermethod(n, n);
	return 0;
}