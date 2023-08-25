#include<bits/stdc++.h>
using namespace std;
void reverse(int n, int arr[], int i) {
	if (i >= n / 2)
	{
		return;
	}
	swap(arr[i], arr[n - i - 1]);
	reverse(n, arr, i + 1);

}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	reverse(n, arr, 0);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;

}