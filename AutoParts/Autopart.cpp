#pragma once
#include <iostream>
#include "Autopart.h"

using namespace std;

AutoPart::AutoPart(int partNo, string partDescription, int partMaker) : BasePart(partNo)
{
	{
		_PartDescription = partDescription;
		_PartMaker = partMaker;
		cout << "In AutoPart Destructor: " << _PartDescription << endl;
	}
}

/// <summary>
/// Print the parts information
/// </summary>

void AutoPart::PrintPart()
{
	cout << BasePart::_PartNo << "\t" << _PartMaker << "\t" << _PartDescription << endl;
}

void AutoPart::setPartNo(int partNo)
{
	_PartNo = partNo; 
}
