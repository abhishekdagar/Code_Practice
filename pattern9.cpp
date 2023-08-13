#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/pattern/1
void print7(int n) {

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
}

void print8(int n) {

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * n - (2 * i + 1); j++)
		{
			cout << "*";
		}
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << "\n";
	}
}
int main() {
	int n;
	cin >> n;
	print7(n);
	print8(n);
	return 0;
}