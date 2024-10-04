#include "ApprovalTests.hpp"
#include "catch2/catch.hpp"

#include "VendingMachinePrinter.h"

using namespace std;

TEST_CASE ("VendingMachinePrinter") {
    auto* machine = new VendingMachine();
    auto printer = V