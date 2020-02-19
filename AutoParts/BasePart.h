#pragma once
#include <iostream>

using namespace std;

class BasePart
{
protected:
	int _PartNo = 0;
	string _PartDescription = "";
	int _PartMaker = 0;
public:
	BasePart(int PartNo)
	{
		_PartNo = PartNo;
		cout << "In BasePart Constructor: " << _PartNo << endl;
	}
	virtual ~BasePart()
	{
		cout << "In BasePart Constructor: " << _PartNo << endl;
	}

	// Set the class to always have to be overridden
	virtual void PrintPart() = 0;
};

