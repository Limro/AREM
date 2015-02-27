#pragma once

#include "ApplicationModeSetting.hpp"

class Mode2 : public ApplicationModeSetting
{
public:
	static Mode2& getInstance()
	{
		static Mode2 instance; // Guaranteed to be destroyed.
		// Instantiated on first use.
		return instance;
	}

	void enter_state(EmbeddedSystemX*) override;

	void chMode(EmbeddedSystemX*) override;
private:
	void respondM2event();

	Mode2();
	~Mode2();
	Mode2(Mode2 const&) = delete;
	void operator=(Mode2 const&) = delete;
};