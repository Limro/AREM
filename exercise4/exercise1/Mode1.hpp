#pragma once

#include "ApplicationModeSetting.hpp"

class Mode1 : public ApplicationModeSetting
{
public:
	static Mode1& getInstance()
	{
		static Mode1 instance; // Guaranteed to be destroyed.
		// Instantiated on first use.
		return instance;
	}

	void enter_state(EmbeddedSystemX*) override;

	std::string compute(std::string input) override;

	void chMode(EmbeddedSystemX*) override;
private:

	Mode1();
	~Mode1();
	Mode1(Mode1 const&) = delete;
	void operator=(Mode1 const&) = delete;
};