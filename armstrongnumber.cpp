#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/codestudio/problems/check-armstrong_589

int main() {
	int n, count = 0, orignalnum = 0, num2 = 0, check = 0, lastdigit = 0;
	cin >> n;
	orignalnum = n;
	num2 = n;
	while (n > 0) {
		n = n / 10;
		count++;
	}
	while (num2 > 0) {
		lastdigit = num2 % 10;
		check = check + pow(lastdigit, count);
		num2 = num2 / 10;
	}
	if (orignalnum == check)
	{
		cout << "true";
	}
	else {
		cout << "false";
	}
	return 0;
}