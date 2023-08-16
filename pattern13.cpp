#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718712/1
/*
1
2 3
4 5 6
7 8 9 10
*/

int main() {
	int n;
	cin >> n;
	int first = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << first << " ";
			first = first + 1;

		}
		cout << "\n";
	}
	return 0;
}