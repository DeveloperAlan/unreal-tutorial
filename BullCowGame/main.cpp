#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();

//the entry point of our application.
int main()
{
	bool bWantsToPlayAgain = false;
	do {
		PrintIntro();
		PlayGame();
		bWantsToPlayAgain = AskToPlayAgain();
	} while (bWantsToPlayAgain);
	
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

bool AskToPlayAgain()
{
	cout << "Do you want to play again?";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'y' || Response[0] == 'Y');
}
