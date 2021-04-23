#include <iostream>
using namespace std;
int main() {

	int N;

	cin >> N;
	
	int sum = 0;
	int i, index;

	for (i = 1; sum < N; i++) 
		sum += i;	

	sum -= (--i);
	index = N - sum - 1;

	if (i % 2 == 1)
		cout << i - index << "/" << 1 + index;	
	else 
		cout << 1 + index << "/" << i - index;
	
	return 0;
}