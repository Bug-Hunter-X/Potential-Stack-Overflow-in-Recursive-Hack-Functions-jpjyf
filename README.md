# Potential Stack Overflow in Recursive Hack Functions

This repository demonstrates a potential stack overflow issue in Hack code involving recursive function calls.  The `foo` function calculates factorials recursively, while `bar` calculates the sum of integers recursively. Both lack robust handling of large inputs, making them vulnerable to stack overflow errors.

The `bug.hh` file contains the problematic code.  The `bugSolution.hh` file provides a corrected version using iterative approaches to avoid recursion and stack overflow issues.

This example highlights the importance of considering the potential for stack overflow when using recursion, especially with functions that may be called with large input values.  Always consider iterative alternatives or employ techniques to manage recursion depth to mitigate this risk.
