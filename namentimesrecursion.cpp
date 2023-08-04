#include<bits/stdc++.h>
using namespace std;
// print name n times, n is input
void printname(int i, int n) {
	if (i > n)
	{
		return;
	}
	cout << "Abhishek" << "\n";
	printname(i + 1, n);
}

int main() {
	int n;
	cin >> n;
	printname(1, n);
	return 0;
}
// TC is O(n)
// Space is O(n) in the stack