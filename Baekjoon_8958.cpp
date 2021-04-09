#include<iostream>

using namespace std;

int main()
{
	int N;
	int seq = 0, score = 0;
	char quiz[80];
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> quiz;
		int j = 0;
		while (quiz[j] != 0)
		{
			if (quiz[j] == 'O')
				seq += 1;
			else seq = 0;	

			score += seq;

			j++;
		}
		cout << score << endl;

		score = 0, seq = 0;

	}
	
	return 0;
}
