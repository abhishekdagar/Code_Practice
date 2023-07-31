#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/codestudio/problems/gcd_6557
void bruteforcemethod(int n1, int n2) {
	int gcd = 1;
	for (int i = 1; i <= min(n1, n2); i++)// n1,n2(9,12) if we loop till 12 then no use
	{
		if (n1 % i == 0 && n2 % i == 0)// if both n1 and n2 are divided by i then i is a factor of both
		{
			gcd = i;
		}
	}
	cout << gcd;
}
// TC is O(min(n1,n2))
void euclidieanmethod(int n1, int n2) {
// gcd(greater,smaller) = gcd(greater%smaller,smaller) till one becomes 0 then other is the gcd

	while (n1 >> 0 and n2 >> 0) {
		if (n1 > n2)
		{
			n1 = n1 % n2;
		}
		else {
			n2 = n2 % n1;
		}
	}
	if (n1 == 0)
	{
		cout << n2;
	}
	else {
		cout << n1;
	}
}
//TC is O(log(min(n1,n2)))
int main() {
	int n1, n2;
	cin >> n1 >> n2;
	//bruteforcemethod(n1, n2);
	euclidieanmethod(n1, n2);
	return 0;
}