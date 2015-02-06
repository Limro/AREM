#pragma once

#include "Operational.hpp"

class RealTimeLoop : public Operational
{
public:
	static RealTimeLoop& getInstance()
	{
		static RealTimeLoop instance; // Guaranteed to be destroyed.
		// Instantiated on first use.
		return instance;
	}
protected:
	RealTimeLoop();
	~RealTimeLoop() override;
	RealTimeLoop(RealTimeLoop const&) = delete;
	void operator=(RealTimeLoop const&) = delete;
};