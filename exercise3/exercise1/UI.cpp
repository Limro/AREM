#include "UI.hpp"


UI::UI()
{
}


UI::~UI()
{
}

std::ostream& UI::out()
{
	return std::cout;
}

std::istream& UI::in()
{
	return std::cin;
}
