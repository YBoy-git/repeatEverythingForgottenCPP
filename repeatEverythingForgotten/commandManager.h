#ifndef COMMAND_MANAGER_053022_H
#define COMMAND_MANAGER_053022_H

#include "command.h"
#include "yearClass.h"
#include "clockClass.h"
#include <iostream>
#include <string>
#include <string_view>

class CommandManager
{
private:

public:

	static std::string requestInput();
	static Command handleInput(std::string_view str);
};

#endif // COMMAND_MANAGER_053022_H