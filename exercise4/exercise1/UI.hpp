#pragma once

#include <iostream>

class UI
{
public:
	UI();
	~UI();
	static std::ostream& out();
	static std::istream& in();
};

