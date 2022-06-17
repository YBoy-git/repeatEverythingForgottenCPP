#ifndef COMMANDS_053022_H
#define COMMANDS_053022_H

enum class Command
{
	None, // There is no commands to execute
	Goto, // Go to some callee func from caller func
	Exit, // Exit to caller function
	Unknown // Some unknown command was found
};

#endif // !COMMANDS_053022_H
