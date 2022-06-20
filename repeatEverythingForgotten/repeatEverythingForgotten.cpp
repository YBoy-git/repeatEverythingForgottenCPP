#include "indents.h"
#include "calleeFuncs.h"
#include "commandManager.h"
#include <iostream>
#include <string>

// Functions defining
void selectFunction();

// Main
int main()
{
	selectFunction();

	return 0;
}

// App logic
void selectFunction()
{
	const std::string lastUpdateDate{
		"26th of May 22"
	};
	const std::string welcomeMssage{
		"Repeating everything I forgot about c++ in a year, version from the "
		+ lastUpdateDate + Indents::smallIndent
		+ "\"list\" for list of available functions and their description\n"
		"\"/exit\" to exit from any function\n"
	};
	const std::string descriptionList{
		"Available functions:" + Indents::smallIndent
		+ "leap - checking whether the input year is leap\n"
		+ "reverseString - reversing input string and printing the result\n"
		+ Indents::smallIndent
	};

	std::cout << welcomeMssage;

	// Application loop
	while (1)
	{
		// Declaring and requesting an input
		std::string input{};
		CommandManager::handleInput(CommandManager::requestInput());

		// Checking for a match, in which case the corresponding function is
		// being called
		if (input == "list")
		{
			std::cout << descriptionList;
		}
		else if (input == "leap")
		{
			std::cout << "Launching leap()..." << Indents::smallIndent;
			leap();
		}
		else if (input == "reverseString")
		{
			std::cout << "Launching reverseString()..." << Indents::smallIndent;
			reverseString();
		}
		else if (input == "clocks")
		{
			std::cout << "Launching clocks()..." << Indents::smallIndent;
			clocks();
		}
		else // If there is no matches, repeat the request
		{
			std::cout << "function not found, retry" << Indents::smallIndent;
		}
	}
}