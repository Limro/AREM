#pragma once

#include "Operational.hpp"

class Suspended : public Operational
{
public:
	static Suspended& getInstance()
	{
		static Suspended instance; // Guaranteed to be destroyed.
		// Instantiated on first use.
		return instance;
	}
private:
	Suspended();
	~Suspended() override;
	Suspended(Suspended const&) = delete;
	void operator=(Suspended const&) = delete;
};