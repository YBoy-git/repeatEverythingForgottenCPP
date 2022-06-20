#include "yearClass.h"
#include "command.h"
#include "indents.h"
#include "commandManager.h"
#include <iostream>
#include <string>
#include <string_view>

// Checking whether the input year is leap
// Function that can be called from selectFunction()
void leap()
{
	// Execute the function until the user enters "/exit"
	while (1)
	{
		static constexpr std::string_view requestMessage{
			"Enter a year to check: "
		};

		Year year{};

		// Printing request message
		std::cout << requestMessage;

		// Requesting for an input, with checking for "/exit" and correct
		// data type
		if (CommandManager::requestInput(leap, year) == Command::Exit)
		{
			// Coming back to selectFunction()
			std::cout << "Exiting leap()..." << Indents::smallIndent;
			break;
		}

		// Printing the result
		std::cout << year << " is leap year: " << std::boolalpha
			<< year.isLeap() << "\n";
	}
}