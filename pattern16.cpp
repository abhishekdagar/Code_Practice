#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285334/1
/*
A
BB
CCC
DDDD
EEEEE
*/

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		char ch = 'A' + i;
		for (int j = 0; j <= i; j++)
		{
			cout << ch;
		}
		cout << "\n";
	}
	return 0;
}