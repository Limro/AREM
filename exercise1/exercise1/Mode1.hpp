#pragma once

#include "RealTimeLoop.hpp"

class Mode1 : public RealTimeLoop
{
public:
	static Mode1& getInstance()
	{
		static Mode1 instance; // Guaranteed to be destroyed.
		// Instantiated on first use.
		return instance;
	}
private:
	Mode1();
	~Mode1() override;
	Mode1(Mode1 const&) = delete;
	void operator=(Mode1 const&) = delete;
};