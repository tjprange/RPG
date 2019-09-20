/* This function validates user-entered data. If bad data is entered (non-integer), it it will reprompt the user to reenter their choice.
This section of code was adapted from https://www.learncpp.com/cpp-tutorial/185-stream-states-and-input-validation/ */

#include <iostream>
#include <string>
#include <sstream>
#include "validation.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stringstream;

int validation(int num)
{
	int validNum; // Return this value if valid

	while (1)
	{
		cout << "\nEnter your choice: ";
		string userChoice;
		getline(cin, userChoice);

		bool validInt = true;
		for (int i = 0; i < userChoice.length(); i++)
		{
			if (!isdigit(userChoice[i])) // if string[i] is not numeric
			{
				cout << "Please make a valid choice." << endl;
				validInt = false;
				break; // Exit if statement
			}
		}
		if (!validInt)
		{
			continue;	// Repeat while loop
		}

		stringstream inputStream;
		inputStream << userChoice;
		inputStream >> validNum;

		if (validNum < 1 || validNum > num) // Not within desired range
		{
			cout << "\nPlease make a valid choice." << endl;
			continue; // Number was not within boundaries
		}

		break; // Exit while loop if valid integer is assigned to validNum
	}

	return validNum;
}

/* This function is the same as above, but takes no argument. It will validate and return a positive int. */
int intValidation()
{
	int validNum; // Return this value if valid

	while (1)
	{
		string userChoice;
		getline(cin, userChoice);

		bool validInt = true;
		for (int i = 0; i < userChoice.length(); i++)
		{
			if (!isdigit(userChoice[i])) // if string[i] is not numeric
			{
				cout << "\nPlease enter valid input.\n" << endl;
				validInt = false;
				break; // Exit if statement
			}
		}
		if (!validInt)
		{
			continue;	// Repeat while loop
		}

		stringstream inputStream;
		inputStream << userChoice;
		inputStream >> validNum;

		if (validNum < 0) // Not within desired range
		{
			cout << "\nPlease enter valid input.\n" << endl;
			continue; // Number was not within boundaries
		}
		break; // Exit while loop if valid integer is assigned to validNum
	}

	return validNum;
}