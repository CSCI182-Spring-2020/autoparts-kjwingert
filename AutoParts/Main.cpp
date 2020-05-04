#include <iostream>
#include "Autopart.h"
#include "EnginePart.h"
#include "BasePart.h"

using namespace std;

int main()
{
    // BasePart bp(36);
    // Create part on the stack
    AutoPart part(5, "Steering Wheel", 243);
    part.PrintPart();



    // Create part on the heap
    AutoPart* pHeapPart = new AutoPart(6, "Gear Shift", 500);
    pHeapPart->PrintPart(); 
    delete pHeapPart; 

    // Create part on the stack
    EnginePart enginePart(3, 33, "Motor", 333);
    part.PrintPart();

    // Create part on the heap
    EnginePart* eHeapPart = new EnginePart(12, 27, "Gear", 400);
    delete eHeapPart;
}


