#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285911/
/*
   A
  ABA
 ABCBA
ABCDCBA
*/

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		//space
		for (int j = 0; j < n - i - 1; j++)
		{
			cout << " ";
		}
		//char
		char ch = 'A';
		for (int j = 0; j < 2 * i + 1; j++)
		{
			cout << ch;
			if (j < (2 * i + 1) / 2) ch++;
			else ch--;
		}
		//space
		for (int j = 0; j < n - i - 1; j++)
		{
			cout << " ";
		}
		cout << "\n";
	}
	return 0;
}