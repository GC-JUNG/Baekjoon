#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	string S;
	int arr[26] = { 0 };
	int max = 0, cnt = 0;
	int temp;

	cin >> S;

	for (int i = 0; i < S.length(); i++) {
		S[i] = toupper(S[i]);
		arr[S[i] - 65]++;
	}
	
	
	for (int j = 0; j < 26; j++)
		if (arr[j] > max) max = arr[j];

	for (int j = 0; j < 26; j++)
	{
		if (arr[j] == max)
		{
			temp = j;
			cnt++;
		}
	}

	if (cnt > 1)
		cout << "?" << endl;
	else
		cout << (char)(temp + 65);
		
	return 0;
}