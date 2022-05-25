#include "additional.h" // for Indents namespace
#include <iostream>
#include <string>

// fucntions defining
void selectFunction();

void leap();
void reverseString();

// namespaces
using namespace std;
using namespace Indents;

// main
int main()
{
	selectFunction();
	return 0;
}

// app logic
void selectFunction()
{
	const string welcomeMssage
	{
		"Repeating everything I forgot about c++ in a year, version from the 25th of May 22" + smallIndent
		+ "\"list\" for list of avaliable functions and their description\n"
		+ "\"/exit\" to exit from any fucntion\n"
	};
	cout << welcomeMssage;

	const string descriptionList
	{
		"Avaliable functions:" + smallIndent
		+ "leap - checking whether the input year is leap\n"
		+ "reverseString - reversing input string and printing the result\n"
		+ smallIndent
	};

	// application loop
	while (1)
	{
		// declaring and requesting an input
		string input;
		getline(cin, input);

		// checking for a match, in which case the corresponding function is being called
		if (input == "list")
		{
			cout << descriptionList;
		}
		else if (input == "leap")
		{
			cout << "Launching leap()..." << smallIndent;
			leap();
		}
		else if (input == "reverseString")
		{
			cout << "Launching reverseString()..." << smallIndent;
			reverseString();
		}
		else // if there is no matches, repeat the request
		{
			cout << "function not found, retry" << smallIndent;
		}
	}
}