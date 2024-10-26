Vending Machine Approval Kata - C# version
==========================================

This is starting code for doing approval testing for the [Vending Machine Kata](https://sammancoaching.org/kata_descriptions/vending_machine.html). The idea is to focus on designing the printer and the tests and have them evolve as the production code gains features. In order to keep the focus there and not on implementing the features, there are several versions of the VendingMachine class. Each version increment has more features than the previous one. The idea is to write tests for VendingMachine, and then just copy and paste new features from the other versions into it. Then you can work on updating the printer and the tests for the new features.

1. The starting position has a functioning XUnit test for the first feature. Re-write it to instead use Approval testing.
2. Write new tests (or extend the existing one) to check the other coin types work correctly. 
   * The penny 