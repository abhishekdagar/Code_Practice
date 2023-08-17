#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285196/1
/*
ABCDE
ABCD
ABC
AB
A
*/

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (char ch = 'A'; ch <= 'A' + n - i - 1; ch++)
		{
			cout << ch;
		}
		cout << "\n";
	}
	return 0;
}