#pragma once
#include <iostream>
#include "BasePart.h"
using namespace std; 

class AutoPart : BasePart
{
public:
	void setPartNo(int);
	void PrintPart();
	AutoPart(int, string, int);
};

