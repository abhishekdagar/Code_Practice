#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/triangle-pattern-1662284916/1
/*
A
A B
A B C
A B C D
A B C D E
*/
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (char ch = 'A'; ch <= 'A' + i; ch++)
		{
			cout << ch << " ";
		}
		cout << endl;
	}
	return 0;
}