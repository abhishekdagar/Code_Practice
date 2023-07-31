#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/codestudio/problems/check-prime_624674
// Prime number = a number that has exactly 2 factors 1 and itself.

int main() {
	int n, counter = 0;
	cin >> n;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			counter++;
			if ((n / i) != i)
			{
				counter++;
			}
		}
	}
	if (counter == 2)
	{
		cout << "true";
	}
	else {
		cout << "false";
	}
	return 0;
}
// TC is O(sqrt n)