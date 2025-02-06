function foo(x: int): int {
  var result: int = 1;
  for (var i = 1; i <= x; ++i) {
    result *= i;
  }
  return result;
}

function bar(x: int): int {
  var result: int = 0;
  for (var i = 1; i <= x; ++i) {
    result += i;
  }
  return result;
}

function main(): void {
  echo foo(5);
  echo bar(5);
}

This revised code uses iterative loops instead of recursion. This eliminates the potential for stack overflow, making it suitable for handling larger input values.