#include<bits/stdc++.h>
using namespace std;
//same as koko eating banana problem
//https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
//STL to find maximum element in vector : *max_element(vector.begin(),vector.end());
//STL to find minimum element in vector : *min_element(vector.begin(),vector.end());
long long calculatedDiv(vector<int> &arr, int mid) {
	long long ans = 0;
	int n = arr.size();
	for (int i = 0; i < n; ++i)
	{
		ans = ans + ceil(arr[i] / (double) mid);
	}
	return ans;
}
int divisor(vector<int> &arr, int threshold) {
	int low = 1;
	int high = *max_element(arr.begin(), arr.end());
	while (low <= high) {
		int mid = (low + high) / 2;
		long long ans = calculatedDiv(arr, mid);
		if (ans <= threshold)
		{
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	return low;
}
int main() {
	int n;
	cin >> n;
	int threshold;
	cin >> threshold;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int res = divisor(arr, threshold);
	cout << res;
	return 0;
}