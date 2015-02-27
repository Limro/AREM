#pragma once

#include "EmbeddedSystemXStateBase.hpp"

class ApplicationModeSetting : public EmbeddedSystemXStateBase
{
public:
	virtual void chMode(EmbeddedSystemX*);

private:
	void default_event_impl();
};

