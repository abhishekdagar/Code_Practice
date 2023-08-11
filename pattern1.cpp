#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/square-pattern/1
/*
	* * * * *
	* * * * *
	* * * * *
	* * * * *
	* * * * *
*/

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
