#pragma once

#include <iostream>
#include "yearClass.h" // for Year-class
#include <string>

using namespace std;

// constants for indents
namespace Indents
{
	const string bigIndent{ "\n\n\n\n" };
	const string smallIndent{ "\n\n" };
}

// enum that contains commands to execute
enum Commands
{
	None, // there is no commands to execute
	Exit // exit to caller function
};

// default template, no functional yet
template <typename T> void assign(T* const assignTo, const string& input)
{
	cout << "Called standard template" << "\n";
}

// declaring specialized functions
template <> void assign<Year>(Year* const assignTo, const string& input);
template <> void assign<string>(string* const assignTo, const string& input);

// requesting an input, checking for slash commands and have some extra features
template <typename T> Commands requestInput(T* const assignTo = nullptr)
{
	// prefix for commands
	const char prefix{ '/' };

	// requesting an input from user, then handling one
	while (1)
	{
		string input;
		getline(cin, input);
		if (input[0] == prefix) // if user entered some command
		{
			// deleting the prefix
			input.erase(0, 1);

			// checking for a match, then executing some commands
			if (input == "exit")
			{
				return Commands::Exit;
			}
			else // if there is no matches, repeat request
			{
				cout << "uknown command" << "\n";
			}
		}
		else // if user entered something else
		{
			// if assignTo-ptr isn't a null pointer, assign to assignTo-variable the input-string
			if (assignTo != nullptr)
			{
				assign(assignTo, input);
			}

			// returning none commands
			return Commands::None;
		}
	}
}