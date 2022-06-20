#include "clockClass.h"
#include <iostream>

void clocks()
{
	Clock c1{};
	Clock c2{ 210 };
	std::cout << *(new Clock{ c1 - c2 });
}