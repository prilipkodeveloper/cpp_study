Practice Problem: Implement a function template named mySwap that takes two parameters by reference, and swaps their values. Demonstrate its usage with int and float variables.

Expected Output:

Before swap: x = 10, y = 20
After swap: x = 20, y = 10
Before swap: f1 = 5.5, f2 = 1.1
After swap: f1 = 1.1, f2 = 5.5


+ Hint
The parameters of the function template should be references to the generic type T, using the syntax T&. This ensures that the function modifies the original variables, not just copies of them.
A temporary variable of type T will be necessary to perform the swap operation.