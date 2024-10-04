#include "ApprovalTests.hpp"
#include "catch2/catch.hpp"
#include "VendingMachine.h"
#include "VendingMachinePrinter.h"

using namespace std;

TEST_CASE ("VendingMachine") {
    auto* machine = new VendingMachine();
    map<string, int> coins;
    coins.insert({
            {"penny", 1},
            {"nickel", 5},
            {"dime", 10},
            {"quarter", 25},
            });

    SECTION("insert coin") {
        CHECK(machine->display == "I