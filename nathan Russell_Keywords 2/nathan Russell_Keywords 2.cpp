// nathan Russell_Keywords 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace::std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	string username;
	int playerSuccess = 0;

	// Display Title of program to user
	cout << "=============================================================\n";
	cout << "\n\tWelcome to the \n\tCode Breaker Training Simulation Program, \n\tdesignated Keywords Mark II.\n";
	cout << "\n=============================================================\n\n";

	// Ask the recruit to login using thier name

	cout << "\tPlease input your username: ";
	cin >> username;

	// Hold the recruit's name in a var, and address them by it throughout the simulation.

	cout << "\n\tWelcome, " << username << ". Prepare to begin your examination.\n\n\t";

	// Display an overview of what Keywords II is to the recruit 

	cout << "Keywords is a low tech encryption system in which \n\ta word is taken from a list and scrambled.\n\tYour job, " << username << ", is to decrypt the scrambled word.\n";
	cout << "\n=============================================================\n\t";
	system("pause");

	// Display an directions to the recruit on how to use Keywords

	cout << "\n\tThe examination is simple. You will be presented a \n\tblank, and you must type the correct \n\tletters to find the word.\n";
	cout << "\n=============================================================\n\t";
	system("pause");

	// words used
	string words[10] = { "Extinction", "Paramount", "Bonds", "Ghost", "Creation", "Rebound", "Recover", "Defy", "Protocol", "Reward" };

	// selects a word and creates blanks (underscores)
	while (playerSuccess != 3) {
		string selected = words[rand() % 10 + 1];
		string length(selected.size(), '_');
		char playerGuess;


		cout << length << "\nTake a guess: ";
		cin >> playerGuess;

		if (selected.find(playerGuess) != string::npos) {
			for (int letter = 0; letter < selected.size(); letter++) {
				if (playerGuess == selected[letter]) {
					length[letter] = playerGuess;
				}
			}
		}
		if (playerGuess == ) {
			++playerSuccess;

		}
	}
	// Create an int var to count the number of simulations being run starting at 1

	// Display the simulation # is staring to the recruit. 

	// Pick new 3 random words from your collection as the secret code word the recruit has to guess. 



	// While recruit hasn’t made too many incorrect guesses and hasn’t guessed the secret word

	//     Tell recruit how many incorrect guesses he or she has left

	//     Show recruit the letters he or she has guessed

	//     Show player how much of the secret word he or she has guessed

	//     Get recruit's next guess

	//     While recruit has entered a letter that he or she has already guessed

	//          Get recruit ’s guess

	//     Add the new guess to the group of used letters

	//     If the guess is in the secret word

	//          Tell the recruit the guess is correct

	//          Update the word guessed so far with the new letter

	//     Otherwise

	//          Tell the recruit the guess is incorrect

	//          Increment the number of incorrect guesses the recruit has made

	// If the recruit has made too many incorrect guesses

	//     Tell the recruit that he or she has failed the Keywords II course.

	// Otherwise

	//     Congratulate the recruit on guessing the secret words

	// Ask the recruit if they would like to run the simulation again

	// If the recruit wants to run the simulation again

	//     Increment the number of simiulations ran counter

	//     Move program execution back up to // Display the simulation # is staring to the recruit. 

	// Otherwise 

	//     Display End of Simulations to the recruit

	//     Pause the Simulation with press any key to continue
	system("pause");
	return 0;
}

