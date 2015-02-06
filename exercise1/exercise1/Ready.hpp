#pragma once

#include "Operational.hpp"

class Ready : public Operational
{
public:
	static Ready& getInstance()
	{
		static Ready instance; // Guaranteed to be destroyed.
		// Instantiated on first use.
		return instance;
	}
private:
	Ready();
	~Ready() override;
	Ready(Ready const&) = delete;
	void operator=(Ready const&) = delete;
};