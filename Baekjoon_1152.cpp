#include <string>
#include <iostream>

using namespace std;

int main() {
	string word;
	int cnt = 0;

	getline(cin,word);

	for (int i = 0; i < word.length(); i++)
		if (word[i] == ' ') cnt++;
	
	if (word[0] == ' ') cnt--;
	if (word[word.length() - 1] == ' ') cnt--;

	cout << cnt+1;

	return 0;
}
