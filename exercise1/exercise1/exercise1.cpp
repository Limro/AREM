#include <iostream>

#include "EmbeddedSystemX.hpp"

int main(int argc, const char* argv)
{
	EmbeddedSystemX system("EmbeddedSystemX");

	std::cout << "w00t" << std::endl;
	
	while (true)
	{
		int eventCommand;
		std::cin >> eventCommand;

		switch (eventCommand)
		{
			case 1:

				break;
			case 2: 
				break; 
			case 4: 
				break; 
		}
	}

}