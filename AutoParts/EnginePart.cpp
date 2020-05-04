#pragma once
#include <iostream>
#include "EnginePart.h"
#include "Autopart.h"
#include "BasePart.h"

using namespace std;

EnginePart::EnginePart(int partNo,  int partMaker, string partDescription, int EngineSpecNo) : AutoPart(partNo, partDescription, partMaker)
{
	{
		_EngineSpecNo = EngineSpecNo;
		cout << "In EnginePart Constructor";
	}
}

EnginePart::~EnginePart()
{
	cout << "In EnginePart Destructor: " << _EngineSpecNo << endl;
}

void EnginePart::printPart()
{
	cout << _EngineSpecNo << endl;
}