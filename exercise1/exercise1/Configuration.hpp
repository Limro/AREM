#pragma once

#include "Operational.hpp"

class Configuration : public Operational
{
public:
	static Configuration& getInstance()
	{
		static Configuration instance; // Guaranteed to be destroyed.
		// Instantiated on first use.
		return instance;
	}
private:
	Configuration();
	~Configuration() override;
	Configuration(Configuration const&) = delete;
	void operator=(Configuration const&) = delete;
};

