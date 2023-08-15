#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/double-triangle-pattern-1662664259/1
/*
1        1
12      21
123    321
1234  4321
1234554321
*/
void patternleft (int n) {
	for (int i = 1; i <= n; i++)
	{
		//numbers
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		//space
		for (int j = 1; j <= (2 * n) - 2 * i; j++)
		{
			cout << " ";
		}
		//numbers
		for (int j = i; j >= 1; j--)
		{
			cout << j;
		}
		cout << "\n";
	}
}

int main() {
	int n;
	cin >> n;
	patternleft(n);
	return 0;
}