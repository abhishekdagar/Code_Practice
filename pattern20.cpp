#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/double-triangle-pattern-1662287416/1
/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/

int main() {
	int n;
	cin >> n;
	int space = 2 * n - 2;
	for (int i = 1; i <= 2 * n - 1; i++)
	{
		int stars = i;
		if (i > n) stars = 2 * n - i;
		//stars
		for (int j = 1; j <= stars; j++)
		{
			cout << "*";
		}
		//space
		for (int j = 1; j <= space; j++)
		{
			cout << " ";
		}
		//stars
		for (int j = 1; j <= stars; j++)
		{
			cout << "*";
		}
		cout << "\n";
		if (i < n) space = space - 2;
		else space = space + 2;
	}
	return 0;
}