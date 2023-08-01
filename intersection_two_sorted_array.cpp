#include<bits/stdc++.h>
using namespace std;
//https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149
vector<int> optimal(vector<int> &a, int n1, vector<int> &b, int n2) {
	int i = 0;
	int j = 0;
	vector<int> temp;
	while (i < n1 && j < n2) {
		if (a[i] < b[j])
		{
			i++;
		}
		else if (b[j] < a[i])
		{
			j++;
		}
		else {
			temp.push_back(a[i]);
			i++;
			j++;
		}
	}
	return temp;
}
int main() {
	int n1;
	cin >> n1;
	vector<int> a(n1);
	for (int i = 0; i < n1; i++)
	{
		cin >> a[i];
	}
	int n2;
	cin >> n2;
	vector<int> b(n2);
	for (int i = 0; i < n2; i++)
	{
		cin >> b[i];
	}
	vector<int> vc;
	vc = optimal(a, n1, b, n2);
	for (int i = 0; i < vc.size(); i++)
	{
		cout << vc[i] << " ";
	}

	return 0;
}
//TC is O(n1+n2) and SC is O(n) where n = no of equal elements in both the array's