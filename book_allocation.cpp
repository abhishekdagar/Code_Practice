#include<bits/stdc++.h>
using namespace std;
//In binary search ans is always [low,high] both including
//https://www.codingninjas.com/studio/problems/allocate-books_1090540
//https://leetcode.com/problems/split-array-largest-sum/
//https://www.codingninjas.com/studio/problems/painter-s-partition-problem_1089557
//Split array largest sum and Painter's problem all have same solution
//Whenever problem is like min(max) or max(min) we can use binary search
int calculateStudents(vector<int> &arr, int mid , int n) {	//to calculate no of students
	int countStudents = 1;
	int pages = 0;
	for (int i = 0; i < n; i++)
	{
		if (pages + arr[i] <= mid)
		{
			pages += arr[i];
		}
		else {
			countStudents++;
			pages = arr[i];
		}
	}
	return countStudents;
}
int bookAllocate(vector<int> &arr, int n, int noStudents) {
	if (noStudents > n)	// no of students > no of books then we can't assign
	{
		return -1;
	}
	int low = *max_element(arr.begin(), arr.end());	// min value will be max of array because then atleast everone can hold one book
	int high = accumulate(arr.begin(), arr.end(), 0);// if we have only 1 student then he has to hold all books
	while (low <= high) {
		int mid = (low + high) / 2;
		int ans = calculateStudents(arr, mid, n);
		if (ans > noStudents)
		{
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return low;
}
int main() {
	int n;
	cin >> n;
	int noStudents;
	cin >> noStudents;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int res = bookAllocate(arr, n, noStudents);
	cout << res;
	return 0;
}