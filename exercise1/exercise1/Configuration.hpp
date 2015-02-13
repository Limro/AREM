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
	void enter_state(EmbeddedSystemX*) override;

	void ConfigurationEnded(EmbeddedSystemX*) override;
private:
	void readConfigurationInfo(EmbeddedSystemX*);
	void PerformConfigurationX(EmbeddedSystemX*);

	Configuration();
	~Configuration() override;
	Configuration(Configuration const&) = delete;
	void operator=(Configuration const&) = delete;
};

