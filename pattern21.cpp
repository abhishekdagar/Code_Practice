#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/square-pattern-1662287714/1
/*
****
*  *   4*4 square
*  *
****
*/
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
			{
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}