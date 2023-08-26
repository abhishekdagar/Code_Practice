//Reverse and Palindrome of string https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s, s_rev;
	cin >> s;
	for (int i = s.size() - 1; i >= 0; --i) {
		s_rev.push_back(s[i]);
	}
	//cout << s_rev << endl;
	if (s == s_rev)
	{
		cout << "YES";
	}
	else
		cout << "NO";

}