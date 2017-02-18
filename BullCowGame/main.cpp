#include <iostream>
#include <string>

using namespace std;

int main()
{
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game" << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";	

	string Guess = "";
	getline(cin, Guess);
	cout << Guess << endl;
	return 0;
}