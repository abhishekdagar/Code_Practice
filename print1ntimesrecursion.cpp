#include<bits/stdc++.h>
using namespace std;
int counter = 1;
void print1() {
	if (counter == 5)
	{
		return;
	}
	cout << counter << "\n";
	counter++;
	print1();
}

int main() {
	print1();
	return 0;
}