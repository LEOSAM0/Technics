#pragma once
#include "ITechnics.h"

class Computers : virtual public ITechnics {
public:
	Computers(int voltage);
	void Show() override;

protected:
	int _voltage;
};

class AMD : public Computers {
public:
	AMD(int voltage, int power);
	void Show() override;

protected:
	int _power;
};

class Intel : public Computers {
public:
	Intel(int voltage, int memory);
	void Show() override;
protected:
	int _memory;
};