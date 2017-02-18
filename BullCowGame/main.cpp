#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

//the entry point of our application.
int main()
{
	PrintIntro();
	constexpr int COUNT = 5;
	for (int i = 0; i < COUNT; i++)
	{
		GetGuessAndPrintBack();
	}
	return 0;
}

void PrintIntro() 
{
	//introduce the game.
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game. \n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

string GetGuessAndPrintBack() {
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	//Print Guess back
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}