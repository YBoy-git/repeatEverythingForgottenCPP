#include <iostream>
#include "yearClass.h" // for Year-class
#include "additional.h" // for additional functional

using namespace std;

// checking whether the input year is leap
// function that can be called from selectFunction()
void leap()
{
	// execute the function until the user enters "/exit"
	while (1)
	{
		const string requestMessage
		{
			"Enter a year to check: "
		};

		Year year;

		// printing request message
		cout << requestMessage;

		// requesting for an input, with checking for "/exit" and correct datatype
		if (requestInput(&year) == Commands::Exit)
		{
			// coming back to selectFunction()
			cout << "Exiting leap()..." << Indents::smallIndent;
			break;
		}

		// printing the result
		cout << year << " is leap year: " << boolalpha << year.isLeap() << "\n";
	}
}