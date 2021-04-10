#include <iostream>

using namespace std;

int main()
{
	int N;
	int sum = 0;
	char num;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		sum += num - '0';
		cout <<"num : "<< num << endl;
	}

	cout << sum << endl;
	return 0;
}



