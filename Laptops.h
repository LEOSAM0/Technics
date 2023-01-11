#pragma once
#include "ITechnics.h"

class Laptops : virtual public ITechnics {
public:
	Laptops(int video);
	void Show() override;

protected:
	int _videomemory;
};

class HP : public Laptops {
public:
	HP(int videomemory, int cords);
	void Show() override;

protected:
	int _cords;
};

class Acer : public Laptops {
public:
	Acer(int videomemory, std::string color);
	void Show() override;

protected:
	std::string _color;
};