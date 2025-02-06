function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function bar(x: int): int {
  if (x == 0) {
    return 0;
  } else {
    return x + bar(x - 1);
  }
}

function main(): void {
  echo foo(5);
  echo bar(5);
}

This code will compile without any errors but may lead to unexpected behavior for larger input values.  The `foo` function calculates factorials, which grow very quickly.  For `x=5`, this is fine. However, for larger `x`, it will result in a stack overflow. The `bar` function calculates the sum of integers from 1 to `x`. Though less prone to stack overflow, for sufficiently large inputs, it may also encounter issues.