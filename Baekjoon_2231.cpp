#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin >> N;

	int result;

	for (int i = 0; i < N; i++) {

		int temp = i;
		result = temp;

		while (temp != 0) {
			result += temp % 10;
			temp /= 10;
		}

		if (result == N) {
			cout << i;
			break;
		}

		if (i == N - 1)
			cout << 0;
	}


	return 0;
}