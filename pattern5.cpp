#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/triangle-pattern/1
/*
	* * * * *
	* * * *
	* * *
	* *
	*
*/

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i + 1; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}