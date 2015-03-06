#pragma once

#include "EmbeddedSystemXStateBase.hpp"

class ApplicationModeSetting : public EmbeddedSystemXStateBase
{
public:
	virtual void chMode(EmbeddedSystemX*);
	virtual std::string compute(std::string input) = 0;

private:
	void default_event_impl();
};

