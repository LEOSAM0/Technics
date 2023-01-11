#pragma once
#include <iostream>

class ITechnics  {
public:
	virtual void Show() = 0;
	virtual ~ITechnics() = default;
};