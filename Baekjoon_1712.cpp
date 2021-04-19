#include <iostream>
using namespace std;
int main() {

	int A, B, C;

	int cnt = 0;
	cin >> A >> B >> C;

	if (C > B)
	{
		cout << A / (C - B)+1;
	}
	else cout << - 1;

	return 0;
}