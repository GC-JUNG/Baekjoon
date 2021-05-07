#include <iostream>

using namespace std;

int main()
{
	int x, y, T;

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> x >> y;
		int cnt = 0;

		for (int j = 1; x < y; j++)
		{
			if (x < y)
			{
				x += j;
				cnt++;
			}
			if (x < y)
			{
				y -= j;
				cnt++;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}