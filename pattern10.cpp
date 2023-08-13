#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718013/1
/*
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
*/

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= 2 * n - 1; i++)
	{
		int stars = i;
		if (i > n)
		{
			stars = 2 * n - i;
		}
		for (int j = 1; j <= stars; j++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
	return 0;
}