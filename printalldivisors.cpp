#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/codestudio/problems/print-all-divisors-of-a-number_1164188

void printdivisors(int n) {
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << i << " ";
		}
	}
}
// TC is O(n) n= input size
void squarerootmethod(int n) {
	vector<int> list;
	for (int i = 1; i <= sqrt(n); i++)// i < = sqrt(n) can also be written as i*i <= n if don't want to use sqrt function
	{
		if (n % i == 0)
		{
			list.push_back(i);
			if ((n / i) != i) {
				list.push_back(n / i);
			}
		}
	}
	sort(list.begin(), list.end());
	for (auto it : list)
	{
		cout << it << " ";
	}
}
// TC is O(sqrt n) + O(mlogm){m =number of factors, for sorting} + O(m){for loop through factors}
int main() {
	int n;
	cin >> n;
	//printdivisors(n);
	squarerootmethod(n);
	return 0;
}