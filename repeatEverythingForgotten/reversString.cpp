#include "command.h"
#include "indents.h"
#include "commandManager.h"
#include <iostream>
#include <string>
#include <string_view>

// Reversing input string and printing the result
// function that can be called from selectFunction()
void reverseString()
{
	// Execute the function until the user enters "/exit"
	while (1)
	{
		static constexpr std::string_view requestMessage{
			"Enter a string: "
		};

		std::string str{};

		// Printing request message
		std::cout << requestMessage;

		// Requesting for an input, with checking for "/exit" and correct
		// datatype
		if (CommandManager::requestInput(reverseString, str) == Command::Exit)
		{
			// Coming back to selectFunction()
			std::cout << "Exiting reverseString()..." << Indents::smallIndent;
			break;
		}

		// Reversing string
		reverse(str.begin(), str.end());

		// Printing the result
		std::cout << "Reversed string is \"" << str << "\"\n";
	}
}