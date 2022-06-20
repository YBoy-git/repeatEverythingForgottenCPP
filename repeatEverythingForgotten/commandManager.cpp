#include "commandManager.h"

std::string CommandManager::requestInput()
{
	std::string str{};
	std::getline(std::cin, str);
	return str;
}

Command CommandManager::handleInput(std::string_view str)
{
	// Some handling, IDK how to make it work for now.
}