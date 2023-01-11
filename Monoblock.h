#pragma once
#include "Computers.h"
#include "Laptops.h"

class Monoblock final : public Computers, Laptops {
public:
	Monoblock(int voltage, int videomemory);
	void Show() override;
};