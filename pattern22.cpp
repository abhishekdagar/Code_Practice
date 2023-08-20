#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/square-pattern-1662666141/1
/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < 2 * n - 1; i++)
	{
		for (int j = 0; j < 2 * n - 1; j++)
		{

			int top = i;// distance from top to any number
			int left = j;
			int right = (2 * n - 1) - 1 - j; // distance from right last index - current j value
			int bot = (2 * n - 1) - 1 - i;
			cout << (n - min(min(left, right), min(top, bot)));
		}
		cout << "\n";
	}
	return 0;
}