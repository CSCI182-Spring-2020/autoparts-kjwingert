#pragma once
#include <iostream>
#include "Autopart.h"
#include "BasePart.h"

using namespace std;

class EnginePart : AutoPart
{
private:
	int _EngineSpecNo = 0;

public:
	EnginePart(int, int, string, int);

	virtual ~EnginePart();

	virtual void printPart();
};