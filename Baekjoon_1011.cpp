#include <iostream>

using namespace std;

int main()
{
	int x, y, T;
	
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> x >> y;
		int n = 0, cnt =0;

		while (x < y)
		{
			++n;
			if (x < y)
			{
				x += n;
				cnt++;
			}			
			if (x < y)
			{
				y -= n;
				cnt++;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}

