#pragma once

#include "ApplicationModeSetting.hpp"

class Mode3 : public ApplicationModeSetting
{
public:
	static Mode3& getInstance()
	{
		static Mode3 instance; // Guaranteed to be destroyed.
		// Instantiated on first use.
		return instance;
	}

	void enter_state(EmbeddedSystemX*) override;

	std::string compute(std::string input) override;

	void chMode(EmbeddedSystemX*) override;
private:

	Mode3();
	~Mode3();
	Mode3(Mode3 const&) = delete;
	void operator=(Mode3 const&) = delete;
};