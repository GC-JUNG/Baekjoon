#include <iostream>
using namespace std;

int main()
{
	int T, H, W, N;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> H >> W >> N;

		if (N % H == 0)
			cout << H;
		else
			cout << N % H;

		if (N % H == 0) {
			if (N / H < 10)
				cout << "0" << N / H << endl;
			else
				cout << N / H << endl;
		}
		else
		{
			if (N / H + 1 == 10)
				cout << N / H + 1 << endl;
			else if (N / H < 10)
				cout << "0" << N / H + 1 << endl;
			else
				cout << N / H + 1 << endl;
		}
	}

	return 0;
}