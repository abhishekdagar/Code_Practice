#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/double-triangle-pattern/1
/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << "*";
		}
		for (int j = 0; j < 2 * i ; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < n - i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		for (int j = 1; j <= 2 * n - 2 * i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}