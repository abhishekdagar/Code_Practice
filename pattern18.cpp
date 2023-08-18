#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/triangle-pattern-1662286302/1
/*
E
E D
E D C
E D C B
E D C B A
*/
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{	char ch = 'A' + n - 1;
		for (int j = 0; j <= i; j++)
		{
			cout << ch << " ";
			ch--;
		}
		cout << "\n";
	}
	return 0;
}