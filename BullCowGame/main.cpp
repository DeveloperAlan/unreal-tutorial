#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();

//the entry point of our application.
int main()
{
	PrintIntro();
	PlayGame();

	return 0;
}

void PlayGame()
{
	constexpr int COUNT = 5;
	for (int i = 0; i < COUNT; i++)
	{
		string PrintVar = GetGuess();
		cout << "Your guess was: " << PrintVar << endl;
		cout << endl;
	}	
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

string GetGuess() {
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}
