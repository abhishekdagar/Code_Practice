#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/triangle-pattern-1661492263/1
/*
    *
   ***
  *****
 *******
*********
*/

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			cout << "*";
		}
		for (int j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		cout << "\n";
	}
	return 0;
}