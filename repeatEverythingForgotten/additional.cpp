#include "additional.h"

// defining specialized function template for T = Year
template <> void assign<Year>(Year* const assignTo, const string& input)
{
	// string that will be asssigned to assignTo-YearClass
	string temp;
	
	// foreach loop throughout input-string
	for (const auto& el : input)
	{
		// if element is a digital, push it back to temp
		if (el >= 48 && el <= 57)
		{
			temp.push_back(el);
		}
	}

	// if temp is empty string, doing nothing
	if (temp == "")
	{
		return;
	}

	// assigning converted temp-string to assignTo-YearClass
	*assignTo = stoll(temp);
}

// defining specialized function template for T = string
template <> void assign<string>(string* const assignTo, const string& input)
{
	// simple assigning input-string to assignTo-string
	*assignTo = input;
}