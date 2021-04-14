#include <string>
#include <iostream>

using namespace std;

int main() {
	string word;
	string abc[8] = {"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
	int sum = 0;

	cin >> word;

	for (int i = 0; i < word.length(); i++)
	{
		for (int j = 0; j < 8; j++) {
			if (abc[j].find(word[i]) != string::npos)
				sum += j + 3;
		}
	}
	cout << sum;

	return 0;
}
