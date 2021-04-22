#include <iostream>
using namespace std;
int main() {

	int N;

	cin >> N;
	int sum = 1;
	int i;

	for (i = 1; N > sum; i++)
		sum += 6* i;
		
	cout << i;

	return 0;
}