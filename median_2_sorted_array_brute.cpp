#include<bits/stdc++.h>
using namespace std;
//https://takeuforward.org/data-structure/median-of-two-sorted-arrays-of-different-sizes/
//if length of merged array is odd(i.e n = odd) then median = element at n/2
//if length of merged array is even(i.e n = even) then median = element at {(n/2) + (n/2)-1}/2
double findMedian(vector<int> &arr1, int n1, vector<int> &arr2, int n2) {
	int n = n1 + n2;
	int i = 0;
	int j = 0;
	int index2 = n / 2;
	int index1 = index2 - 1;	//(n/2)-1
	int ele1 = -1;//element at index1
	int ele2 = -1;//element at index2
	int count = 0;//used to find the correct indexes
	while (i < n1 && j < n2) {
		if (arr1[i] < arr2[j]) {
			if (count == index1) {
				ele1 = arr1[i];
			}
			if (count == index2) {
				ele2 = arr1[i];
			}
			count++;
			i++;
		}
		else {
			if (count == index1) {
				ele1 = arr2[i];
			}
			if (count == index2) {
				ele2 = arr2[i];
			}
			count++;
			j++;
		}
	}
	//for any element remaining in array 1
	while (i < n1) {
		if (count == index1) {
			ele1 = arr1[i];
		}
		if (count == index2) {
			ele2 = arr1[i];
		}
		count++;
		i++;
	}
	//for any element remaining in array 2
	while (j < n2) {
		if (count == index1) {
			ele1 = arr2[i];
		}
		if (count == index2) {
			ele2 = arr2[i];
		}
		count++;
		j++;

	}
	if (n % 2 == 1)		//n is odd
	{
		return ele2;
	}
	return (double)(ele1 + ele2) / 2;	//n is even

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
	double res = findMedian(arr1, n1, arr2, n2);
	cout << res;
}
//TC is O(n1+n2) and SC is O(1) we can use binary search to further optimize it