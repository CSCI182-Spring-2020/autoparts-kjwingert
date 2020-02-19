// AutoParts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Autopart.h"

int main()
{
    BasePart bp(36);
    // Create part on the stack
    AutoPart part(5, "Steering Wheel", 243);
    part.PrintPart();

    // Create part on the heap
    AutoPart* pHeapPart = new AutoPart(6, "Gear Shift", 500);
    pHeapPart->PrintPart(); 
    delete pHeapPart; 

}


