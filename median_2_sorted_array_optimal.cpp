#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/median-of-two-sorted-arrays/description/
//https://www.youtube.com/watch?v=NTop3VTjmxk
double findMedian(vector<int> &arr1, vector<int> &arr2) {
	int n1 = arr1.size();
	int n2 = arr2.size();
	if (n1 > n2) {
		return findMedian(arr2, arr1);
	}
	int low = 0;
	int high = n1;
	while (low <= high) {
		int cut1 = (low + high) / 2;
		int cut2 = (n1 + n2 + 1) / 2 - cut1;

		int left1 = cut1 == 0 ? INT_MIN : arr1[cut1 - 1];
		int left2 = cut2 == 0 ? INT_MIN : arr2[cut2 - 1];

		int right1 = cut1 == n1 ? INT_MAX : arr1[cut1];
		int right2 = cut2 == n2 ? INT_MAX : arr2[cut2];

		if (left1 <= right2 && left2 <= right1)
		{
			if ((n1 + n2) % 2 == 0)
			{
				return (double)(max(left1, left2) + min(right1, right2)) / 2;
			}
			else {
				return max(left1, left2);
			}
		}
		else if (left1 > right2)
		{
			high = cut1 - 1;
		}
		else {
			low = cut1 + 1;
		}
	}
	return 0.0;
}
int main() {
	int n1;
	cin >> n1;
	vector<int> arr1(n1);
	for (int i = 0; i < n1; i++)
	{
		cin >> arr1[i];
	}
	int n2;
	cin >> n2;
	vector<int> arr2(n2);
	for (int i = 0; i < n2; i++)
	{
		cin >> arr2[i];
	}
	double res = findMedian(arr1, arr2);
	cout << res;
}
//TC is O(log(min(m,n))) and SC is O(1)