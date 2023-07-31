/*constraints;
1 <= L <= 10 ^ 9
1 <= B <= 10 ^ 9
Input format:
2 space seprated integer l and b

Output format;
Single no which is area of rectangle

Sample Output
3 4

Sample Output
12
overflow concept
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
	long int l, b;
	cin >> l >> b;
	long long int a;
	a = l * b;
	cout << a;
}