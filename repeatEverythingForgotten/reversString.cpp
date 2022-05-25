#include <iostream>
#include "additional.h"

// namespaces
using namespace std;
using namespace Indents;

// reversing input string and printing the result
// function that can be called from selectFunction()
void reverseString()
{
	// execute the function until the user enters "/exit"
	while (1)
	{
		const string requestMessage
		{
			"Enter a string: "
		};

		string str;

		//printing request message
		cout << requestMessage;

		// requesting for an input, with checking for "/exit" and correct datatype
		if (requestInput(&str) == Commands::Exit)
		{
			// coming back to selectFunction()
			cout << "Exiting reverseString()..." << smallIndent;
			break;
		}

		// reversing string
		reverse(str.begin(), str.end());

		// printing the result
		cout << "Reversed string is \"" << str << "\"\n";
	}
}