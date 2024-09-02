
#include <sstream>
#include "VendingMachinePrinter.h"

VendingMachinePrinter::VendingMachinePrinter(VendingMachine* machine):
machine(machine), columns(60) {}



std::string VendingMachinePrinter::print() {
    std::string printout = "VendingMachine";
    // TODO: finish this

    return printout;
}

VendingMachinePrinter::~VendingMachinePrinter() {
    machine = nullptr;
}

// convenience function to lay out a key va