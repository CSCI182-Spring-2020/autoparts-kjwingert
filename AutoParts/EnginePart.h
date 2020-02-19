#pragma once
#include "Autopart.h"

using namespace std;

class EnginePart
{
public:
	int _EngineSpecNo = 0;
	EnginePart(int, string, int, int);
};

EnginePart::EnginePart(int partNo, string partDescription, int partMaker, int EngineSpecNo) : AutoPart(partNo, partDescription, partMaker)
{
	{
		_EngineSpecNo = 0;
		cout << "In EnginePart Constructor"
	}
}

