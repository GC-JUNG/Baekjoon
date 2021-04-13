#include <string>
#include <iostream>

using namespace std;

int main() {
	string A,B;
	string numA, numB;
	cin >> A >> B;

	for (int i = 2; i >= 0; i--)
	{
		numA += A[i];
		numB += B[i];
	}
	if (numB> numA) cout << numB;
	else cout << numA;

	return 0;
}
