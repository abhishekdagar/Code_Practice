#include<bits/stdc++.h>
using namespace std;
//https://takeuforward.org/hashing/hashing-maps-time-complexity-collisions-division-rule-of-hashing-strivers-a2z-dsa-course/
//for integer array, max size inside main is 10^6 and in global it's 10^7 or 1e7
//using hash array
/*int main() {
	int n;// size of array
	cin >> n;
	int arr[n];
	//cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//precompute defining hash size and counting elements of array
	int hash[13] = {0};
	for (int i = 0; i < n; i++)
	{
		hash[arr[i]] = hash[arr[i]] + 1;
	}
	int q;//how many numbers we have to check
	cin >> q;
	while (q--) {
		int num;// each number we have to cout
		cin >> num;
		cout << hash[num] << "\n";
	}

	return 0;
}*/
//TC is O(N) and space is O(N)


// using map it takes less space compared to hash array in map elements are stored in sorted order
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//precompute storing
	//map<int, int> mpp;//<key,value> this is ordered map
	unordered_map<int, int> mpp;//unordered map
	for (int i = 0; i < n; i++)
	{
		mpp[arr[i]] = mpp[arr[i]] + 1;
	}
	//iterate in the map
	/*for (auto it : mpp) {
		cout << it.first << "-->" << it.second << "\n";
	}*/
	int q;
	cin >> q;
	while (q--) {
		int num;
		cin >> num;
		//fetching
		cout << mpp[num] << "\n";
	}
	return 0;
}
/*
For ordered map(sorted order) storing and fetching in all cases(best,average,worst) is done TC is log(N) time where N = number of elements in map
For unordered map(random order) storing and fetching in Best and Average case is TC is O(1) and in worst case(happens rarely) it is O(N) because of collision
Use unordered map as default and if it gives Time limit exceed error switch to ordered map
*/