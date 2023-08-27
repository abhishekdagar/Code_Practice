//Reverse the given string https://practice.geeksforgeeks.org/problems/reverse-a-string/1
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, s_rev;
	cin >> s;
	for (int i = s.size() - 1; i >= 0; --i)
	{
		s_rev.push_back(s[i]);
	}
	cout << s_rev;

}